#include<iostream>
#include<cmath>
#include<vector>
const int n=5;
const int m=5;
const int p=10;
double norma(std::vector<double>&v);
void T(std::vector<double> &a, std::vector<double> &b);
void mult(std::vector<double> &a, std::vector<double> &b, std::vector<double> &c);
int main()
{
  std::vector<double> A(m*n);
  std::vector<double> B(m*n);
  std::vector<double> C(m*n);
  std::vector<double> MT(m*n);
  std::vector<double> v(n);
  
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
  for(int i=0; i<n;i++)
    {
      for(int j=0; j<m; j++)
	{
	  B[i*n+j]=j*m+i+1;
	  std::cout<<B[i*n+j]<< "  "; 
	}
      std::cout<<"\n";
    }

  for(int i=0; i<m;i++)
    {
      for(int j=0; j<n; j++)
	{
	  C[i*n+j]=0;
	}
    }
  std::cout<< " v= ";
  for(int i=0; i<n; i++)
    {
      v[i]=1;
      std::cout<< v[i] <<" ";
    }
  std::cout<<"\n";
  mult(A,B,C);
  T(A,B);
  std::cout<<"norma"<<std::endl;
  std::cout<<norma(v)<<std::endl;
  
}
void mult(std::vector<double> &a, std::vector<double> &b, std::vector<double> &c)
{
  std::cout<< "A*B" <<std::endl;//MULTIPLICACION 
  for(int i=0; i<n;i++)
    {
      for(int j=0; j<m; j++)
	{
	  for(int ii=0; ii<m;ii++)
	    {
	      c[i*m+j] += (a[i*m+ii]) * (b[ii*m+j]);
	    }
	  std::cout<<c[i*m+j]<< "  "; 
	}
      std::cout<<"\n";
    }
}
void T(std::vector<double> &a, std::vector<double> &b)//trasponer una matriz
{
  for(int i=0; i<m;i++)
    {
      for(int j=0; j<n; j++)
	{
	  b[i*n+j]=a[j*n+i];
	  std::cout<<b[i*n+j]<< "  "; 
	}
      std::cout<<"\n";
    }
}
double norma(std::vector<double>&v)
{
  
  double sum=0;
  for(int i=0; i<n; i++)
    {
      sum += std::pow(v[i],p);
    }
  return std::pow(sum,1.0/p);
}
