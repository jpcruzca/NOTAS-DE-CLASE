#include<iostream>
#include<cmath>
using fun = double(double);
double f(double x);
double regula(double xl, double xu, const double eps, double Nmax, fun f);
int main()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xl=-1,xu=0,eps=1.0e-10,Nmax=100;
  std::cout << regula(xl,xu,eps,Nmax, f)<< std::endl;
  
}
double f(double x)
{
  return  x+std::exp(x);
}

double regula(double xl, double xu, double eps, double Nmax,fun f )//funcion regula falsi recursiva
{
  double xr;
  for (int i=0; i<Nmax; i++)
    {
      xr=xu-f(xu)*(xl-xu)/(f(xl)-f(xu));
      if(f(xl)*f(xr) > 0)
	xl=xr;
      else
	xu=xr;
      std::cout<< xr <<"  "<< f(xr)<<std::endl;
      if(std::fabs(f(xr)) < eps)return xr;
      else
	return regula(xl,xu,eps,Nmax,f);
    }


}
