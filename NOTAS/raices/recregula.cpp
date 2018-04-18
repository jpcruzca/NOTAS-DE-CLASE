#include<iostream>
#include<cmath>
using fun = double(double);
double f(double x);
double regula(double xl, double xu, const double eps, double Nmax, fun f);
int main()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xl=0.5,xu=2.0,eps=1.0e-10,Nmax=1000;
  std::cout << regula(xl,xu,eps,Nmax, f)<< std::endl;
  
}
double f(double x)
{
  return  std::pow(x,3)-2*std::sin(x);
}

double regula(double xl, double xu, double eps, double Nmax,fun f )//funcion regula falsi recursiva
{
  double xr;
  xr=xu-f(xu)*(xl-xu)/(f(xl)-f(xu));
  if(f(xl)*f(xr) > 0)
    xl=xr;
  else
    xu=xr;
  std::cout<< xr <<"  "<< f(xr)<<std::endl;
  if(std::fabs(f(xr)) < eps||nmax==0)return xr;
  else
    return regula(xl,xu,eps,Nmax-1,f);
  
  
  
}
