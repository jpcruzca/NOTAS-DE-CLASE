#include<iostream>
#include<vector>
const int n=5;
const int m=5;
int main(void)
  
{
  double A[n*m]={0.0};//inicializa la matriz con ceros 
  double AT[m*n]={0.0};
  for(int i=0; i<n; i++)
    {
       for(int j=0; j<m; j++)
	{
	  A[i*n+j]=i*n+j;
	}
    }
  
  for(int i=0; i<m; i++)
    {
      for(int j=0; j<n; j++)
	{
	  AT[i*m+j]=A[j*n+i];
	}
    }
  std::cout<<" M" <<std::endl;
   for(int i=0; i<n; i++)
    {
      for(int j=0; j<m; j++)
	{
	  std::cout<<A[i*n+j]<<"  ";
	}
      std::cout<<"\n";
    }
   std::cout<<" MT"<<std::endl;
   for(int i=0; i<m; i++)
     {
       for(int j=0; j<n; j++)
	 {
	  std::cout<<AT[i*n+j]<<"  ";
	 }
       std::cout<<"\n";
     } 
   
}
