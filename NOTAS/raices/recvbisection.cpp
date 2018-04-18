#include<iostream>
#include<cmath>
using fun = double(double);
double f(double x);
double bisection(double xl, double xu, const double eps, double Nmax, fun f);
int main()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xl=0.5,xu=2.0,eps=0.000000001,Nmax=100;
  std::cout << bisection(xl,xu,eps,Nmax, f)<< std::endl;
  
}

double f(double x)
{
  return  std::pow(x,3)-2*std::sin(x);
}

double bisection(double xl, double xu, double eps, double Nmax,fun f )
{
  double xr;
    
      xr=0.5*(xu+xl);
      if(f(xl)*f(xr) > 0)
	xl=xr;
      else
	xu=xr;
      if(std::fabs(f(xr)) < eps ||  Nmax==0)
	return xr;
      else{
	std::cout << xr << std::endl;
	return bisection(xl,xu,eps,Nmax-1, f);}
      
}
