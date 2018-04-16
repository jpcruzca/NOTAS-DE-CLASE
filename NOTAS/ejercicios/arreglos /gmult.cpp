#include<iostream>
#include<cmath>
#include<vector>
const int n=5;
const int m=5;
const int s=5;
const int r=3;
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
	  A[i*n+j]=i*n+j+1;
	  std::cout<<A[i*n+j]<< "  "; 
	}
      std::cout<<"\n";
    }
  
  std::cout<<"B" <<std::endl; //MATRIZ 2
  for(int i=0; i<s;i++)
    {
      for(int j=0; j<r; j++)
	{
	  B[i*s+j]=j*r+i+1;
	  std::cout<<B[i*n+j]<< "  "; 
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
    std::cout<< "el tamaño de la matrices no es el adecuado para multiplicarlas"<<std::endl;
  
}
void mult(std::vector<double> &a, std::vector<double> &b, std::vector<double> &c)
{
  std::cout<< "A*B" <<std::endl;//MULTIPLICACION 
  for(int i=0; i<n;i++)
    {
      for(int j=0; j<r; j++)
	{
	  for(int ii=0; ii<s-1;ii++)
	    {
	      c[i*n+j] += (a[i*n+ii]) * (b[ii*s+j]);
	    }
	  std::cout<<c[i*n+j]<< "  "; 
	}
      std::cout<<"\n";
    }
}


