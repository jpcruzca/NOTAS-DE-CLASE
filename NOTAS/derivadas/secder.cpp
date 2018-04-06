#include<iostream>
#include<cmath>
using fun = double(double);
using fptr= double(double,double, fun);
double f(double x);
double derv(double x, double h, fun f);
double dervC(double x, double h, fun f);
double dervC2(double x, double h, fptr derv)
double derv2(double x, double h, fptr derv);
double dervCR2(double x, double h, fun f );
int main ()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double x=0, h=0.00001;
  std::cout << derv(x,h,f)<<"\t"<< h <<std::endl;
  std::cout << dervC(x,h,f)<<"\t"<< h <<std::endl;
  std::cout << dervCR(x,h,f)<<"\t"<< h <<std::endl;
  std::cout << derv2(x,h,derv)<<"\t"<< h <<std::endl;
  std::cout << dervC2(x,h,f)<<"\t"<< h <<std::endl;
  std::cout << dervCR2(x,h,f)<<"\t"<< h <<std::endl;
  return 0;
}
double f(double x)
{
  return std::cos(x);
}
double derv(double x, double h, fun f)
{
  return (f(x+h)-f(x))/h;
}
double dervC(double x, double h, fun f)
{
   return (f(x+h/2)-f(x-h/2))/h;
}
double dervCR(double x, double h, fun f )
{
  double h2=h/2;
  double R2= dervC(x,h2,f);
  double R1= dervC(x,h,f);
  return (4*R2-R1)/3;
}
double derv2(double x, double h, fptr derv)
{
  return (derv(x+h,h,f)-derv(x,h,f))/h;
}
double dervC2(double x, double h, fptr derv)
{
  return (dervC(x+h,h,f)-dervC(x,h,f))/h;
}
double dervCR2(double x, double h, fun f )
{
  double h2=h/2;
  double R2= dervC2(x,h2,f);
  double R1= dervC2(x,h,f);
  return (4*R2-R1)/3;
}

