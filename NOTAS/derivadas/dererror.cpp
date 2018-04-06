#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
using fun = double(double);
using fn=double(double,double,fun);
double f(double x);
double dervC(double x, double h, fun f);
double dervCR(double x, double h, fun f);
double derv(double x,double h, fun f);
void error(double x,fn dervC, fn dervCR, fn derv, double rv,fun f, std::string name);
int main ()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double x=0, h=0.001;
  std::cout << derv(x,h,f)<<"\t"<< h <<std::endl;
  std::cout << dervC(x,h,f)<<"\t"<< h <<std::endl;
  std::cout << dervCR(x,h,f)<<"\t"<< h <<std::endl;
  error(x,dervC,dervCR,derv,1,f,"errorderv.txt");
  return 0;
}
double f(double x)
{
  return std::sin(x);
}
double derv(double x, double h, fun f, std::string name)
{
  return (f(x+h)-f(x))/h;
}
double dervC(double x, double h, fun f)
{
  return ((f(x+h/2)-f(x-h/2))/h);
}
double dervCR(double x, double h, fun f )
{
  double h2=h/2;
  double R2= dervC(x,h2,f);
  double R1= dervC(x,h,f);
  return (4*R2-R1)/3;
}
void error(double x,fn dervC, fn dervCR, fn derv, double rv,fun f, std::string name)
{
  double vr;
  std::ofstream fout(name);
  std::cout.precision(16); fout.setf(std::ios::scientific);
  fout<< vr << "\t"<< std::abs(dervC(x,0.001,f)-vr)<<"\t"<< std::abs(dervCR(x,0.001,f)-vr)<<"\t"<< std::abs(derv(x,0.001,f)-vr)<< std::endl; 
fout.close();
  
}
