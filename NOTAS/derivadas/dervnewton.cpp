#include<iostream>
#include<cmath>
using fptr=double(double);
double f(double x);
double df(double x);
double newton(double xo, fptr f,fptr df, int max, double eps);
int main()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double eps=1.0e-10,xo=5;
  int max=20;
  std::cout << newton(xo,f,df, max, eps)<<std::endl;
  
  return 0;
}
double f(double x)
{
  return std::pow(x,2)-2;
}
double df(double x)
{
  return 2*x;
}
double newton(double xo,fptr f,fptr df, int max, double eps)
{
  for(int i=1; i<max || std::fabs(f(xo)>eps); i++ )
    {
      xo=xo-(f(xo)/df(xo));
    }
  return xo;
}
