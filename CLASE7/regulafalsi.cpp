#include<iostream>
#include<cmath>
using fun = double(double);
double f(double x);
double bisection(double xl, double xu, const double eps, double Nmax, fun f);
int main()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xl=12,xu=18,eps=1.0e-10,Nmax=100;
  std::cout << bisection(xl,xu,eps,Nmax, f)<< std::endl;
  
}
double f(double x)
{
  return  9.81*68.1/x*(1-exp(-x*10/68.1)) - 40;
}

double bisection(double xl, double xu, double eps, double Nmax,fun f )
{
  double xr;
  for (int i=0; i<Nmax; i++)
    {
      xr=xu-f(xu)*(xl-xu)/(f(xl)-f(xu));
      if(std::fabs(f(xr)) < eps) break;
      if(f(xl)*f(xr) > 0)
	xl=xr;
      else
	xu=xr;
    }

return xr;
}
	
    
  
