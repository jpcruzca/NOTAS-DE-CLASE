#include<iostream>
#include<cmath>
const int n=10;
const int m=10;
//con este programa se computa la multiplicacion entre matrices del mismo tamaño
int main()
{
  double A[m*n]={0.0};
  double B[m*n]={0.0};
  double C[m*n]={0.0};
 std::cout<<" A \n"; 
  for(int i=0; i<n; i++)
    {
       for(int j=0; j<m; j++)
	 {
	   A[i*n+j]=i*n+j;
	   std::cout<<A[i*n+j]<< "  ";
	 }
       std::cout<<"\n";
    }
    std::cout<<" B \n";
  for(int i=0; i<n; i++)
    {
       for(int j=0; j<m; j++)
	 {
	   if(i==j){
	     B[i*n+j]=1;}
	   else
	     B[i*n+j]=0;
	   std::cout<<B[i*n+j]<< " ";  
	 }
       std::cout<<"\n";
    }
  
std::cout<<" C=A*B \n";
   
  for(int i=0; i<n; i++)
    {
       for(int j=0; j<m; j++)
	 {
	   for(int ii=0; ii<m; ii++)
	     {
	      C[i*n+j]+=A[i*n+ii]*B[ii*n+j];
	     }
	    std::cout<<C[i*n+j]<< "  "; 
	 }
       std::cout<<"\n";
    }
}
