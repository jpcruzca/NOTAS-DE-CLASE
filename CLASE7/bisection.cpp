#include<iostream>
#include<cmath>
using namespace std;
using fptr = double(double);
double bisection(double xl, double xu, double eps, double Nmax, fptr func);
int main()
{
  cout.precision(16);
  double xl,xu,eps,Nmax;
  cout << bisection(xl,xu,eps,Nmax)<<endl;
  
}
double bisection(double xl, double xu, double eps, double Nmax, fptr func)
{
  double xr;
  for (int i;i<=Mmax; i++)
    {
      if (fun(xl)*fun(xu)<0)
	xr=(xu+xl)/2.0;
      if(abs(fun(xr)<=eps))break;
	if(fun(xl)*fun(xr)<0))
	xu=xr;
	else 
	  xl=xr
	        
return xr;
}
	
    
  

