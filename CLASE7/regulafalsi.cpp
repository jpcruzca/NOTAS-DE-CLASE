#include<iostream>
#include<cmath>
using namespace std;
using fptr = double(double);
double bisection(double xl, double xu, double eps, double Nmax, fptr func);
int main()
{
  cout.precision(16);
  double xl=12,xu=18,eps=1e-3,Nmax=100;
  cout << bisection(xl,xu,eps,Nmax, fun(x) )<<endl;
  
}
double fun(double x)
{
  return (9.81*68.1/x)*(1-exp(-x*10/68.1))-40) ;
}
double bisection(double xl, double xu, double eps, double Nmax, fptr func)
{
  double xr;
  for (int i;i<=Mmax; i++)
    {
       xr=(xu+xl)*0.5;
       //if (fun(xl)*fun(xu)<0)
       if(abs(fun(xr))<=eps)
	 break;
       if(fun(xl)*fun(xr)<0)
	 xu=xr;
       else 
	 xl=xr
	}

return xr;
}
