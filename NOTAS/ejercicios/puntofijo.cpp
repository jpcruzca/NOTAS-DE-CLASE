#include<iostream>
#include<cmath>
using f=double(double);
double pf(double x,int max, double eps, f s);
double s(double x);
int main()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double x=100, eps=1.0e-10;
  int max=100;
  std::cout<< pf(x,max, eps, s)<< std::endl;
  
}
double s(double x)
{
  return std::pow(x,2)+x+1;
}
double h(double x)
{
  return -1.0/(x+2);
}
double pf(double x,int max, double eps, f s)
{
  double xr;
  for(int i=0;i<max;i++)
    {
      xr=x;
      if(std::fabs(s(xr)< eps))break;
      else
	x=h(xr);
    }
  return xr;
}
