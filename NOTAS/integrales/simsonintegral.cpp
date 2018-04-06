#include<iostream>
#include<cmath>
using fun = double(double);
double f(double x);
double simson(double a, double b, const double n, fun f);
int main()
{
  std::cout.precision(20);
  std::cout.setf(std::ios::scientific);
  double a=0,b=M_PI,n=10000000;
  std::cout << simson(a, b, n, f )<<std::endl;
}
double f(double x)
{
  return std::sin(x);
}
double simson(double a, double b,const double n, fun f)
{
  double h;
  h=(b-a)/n;
  double sum=0;
  double result;
  result= f(a)+f(b);
  double x;
  sum=0;
  for(int i=1;i<n/2;i++){
    x=a+2*i*h;
    sum+=f(x);
  }
  result +=2*sum;

  sum=0;
  for(int ii=1; ii<n/2;ii++){
    x=a+(2*ii-1)*h;
    sum+=f(x);  
  }
  result +=4*sum;

  return h/3*result;
}
