#include<iostream>
#include<vector>
const int n=5,m=4;
void prin(std::vector<double> &a);
double T(std::vector<double> &a, std::vector<double> &b);
int main()//corregir error de salto de memoria
{
  std::vector<double> matriz(n*m);
  std::vector<double> matrizT(m*n);
  for(int i=0; i<n;++i)
    {
      for(int j=0; j<1;++j)
	{
	  matriz[i*n+j]=1;
	}
    }
  for(int i=0; i<m;i++)
    {
      for(int j=0; j<n;j++)
	{
	  matrizT[i*m+j]=0;
	}
    }
  prin(matriz);
  std::cout<< "\n";
  // T(matriz,matrizT);
  
}
void prin(std::vector<double> &a)
{
  for(int i=0; i<n; i++)
    {
      for (int j=0; j<m; j++)
	{
	  std::cout<< a[i*n+j]<<" ";
	}
      std::cout<<"\n";
    }
}
double T(std::vector<double> &a, std::vector<double>&b)
{
  for (int j=0; j<m; j++)
    {
      for(int i=0; i<n;i++)
	{
	  b[j*m+i]=a[i*n+j];
	  std::cout<<b[j*m+i]<< " ";
	}
      std::cout<< "\n";
    }
}
