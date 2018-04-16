#include<iostream>
#include<cmath>
#include<vector>
const int n=3;
const int m=4;
const int s=4;
const int r=2;
void mult(std::vector<double> &a, std::vector<double> &b, std::vector<double> &c);
int main()
{
  std::vector<double> A(m*n);
  std::vector<double> B(s*r);
  std::vector<double> C(m*n);
  std::cout<< "A" <<std::endl; //MATRIZ 1
  for(int i=0; i<n;i++)
    {
      for(int j=0; j<m; j++)
	{
	  A[i*m+j]=i*m+j;
	  std::cout<<A[i*m+j]<< "  "; 
	}
      std::cout<<"\n";
    }
  
  std::cout<<"B" <<std::endl; //MATRIZ 2
  for(int i=0; i<s;i++)
    {
      for(int j=0; j<r; j++)
	{
	  B[i*r+j]=i*r+j;
	  std::cout<<B[i*r+j]<< "  "; 
	}
      std::cout<<"\n";
    }

  for(int i=0; i<n;i++)
    {
      for(int j=0; j<r; j++)
	{
	  C[i*n+j]=0;
	}
    }
  std::cout<<"\n";
  if(m==s){
    mult(A,B,C);}
  else
    std::cout<< "el tamanho de la matrices no es el adecuado para multiplicarlas"<<std::endl;
  return 0;
}
void mult(std::vector<double> &a, std::vector<double> &b, std::vector<double> &c)
{
  std::cout<< "A*B" <<std::endl;//MULTIPLICACION 
  for(int i=0; i<n;i++)
    {
      for(int j=0; j<r; j++)
	{
	  for(int ii=0; ii<s;ii++)
	    {
	      c[i*r+j] += (a[i*s+ii]) * (b[ii*r+j]);
	    }
	  std::cout<<c[i*r+j]<< "  "; 
	}
      std::cout<<"\n";
    }
}


