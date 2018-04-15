#include<iostream>
#include<cmath>
#include<vector>
const int n=5;
const int m=5;
int main()
{
  std::vector<double> A(m*n);
  std::vector<double> B(m*n);
  std::vector<double> C(m*n);
  std::vector<double> MT(m*n);
  
  //M.size(n*m);//con este programa se realiza multilplicacion de matrices con tamaños iguales, pero hay que arreglar un problema en las sumas parciales, utilice la transpuesta para multiplicar mas facil:
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
  // std::cout<<"MT"<<std::endl;//TRANSPUESTA
  // for(int i=0; i<m;i++)
  //   {
  //     for(int j=0; j<n; j++)
  // 	{
  // 	  MT[i*n+j]=MP[j*m+i];
  // 	  std::cout<<M[i*n+j]<< "  "; 
  // 	}
  //     std::cout<<"\n";
  //   }

  for(int i=0; i<m;i++)
    {
      for(int j=0; j<n; j++)
	{
	  C[i*n+j]=0;
	}
    }
  std::cout<< "A*B" <<std::endl;//MULTIPLICACION
  double sum=0; 
  for(int i=0; i<n;i++)
    {
      for(int j=0; j<m; j++)
	{
	  for(int ii=0; ii<m;ii++)
	    {
	      C[i*n+j] += (A[i*n+ii]) * (B[ii*n+j]);
	    }
	  std::cout<<C[i*n+j]<< "  "; 
	}
      std::cout<<"\n";
      
    } 
  
}
