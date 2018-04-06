#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
using fun = double(double);
double f(double x);
double dervC(double x, double h, fun f);
double dervCR(double x, double h, fun f);
double derv(double x,double h, fun f);
double error(double x, double h, fun f);
int main ()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double x=0, h=0.001;
  std::cout << derv(x,h,f)<<"\t"<< h <<std::endl;
  std::cout << dervC(x,h,f)<<"\t"<< h <<std::endl;
  std::cout << dervCR(x,h,f)<<"\t"<< h <<std::endl;
  error(x,h,f);
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
  return ((f(x+h/2)-f(x-h/2))/h);
}
double dervCR(double x, double h, fun f )
{
  double h2=h/2;
  double R2= dervC(x,h2,f);
  double R1= dervC(x,h,f);
  return (4*R2-R1)/3;
}
double error(double x, double h, std::string name, fun f)
{
  std::ofstream fout(name);
  fout.precision(18);
  fout.setf(std::ios::scientific);
  double c;
  int i=0;
  while(i<100)
    {
      c=1.0*i;
      fout<<i<<"\t"<<std::abs(derv(x,h*c,f(x))-1)<<std::endl;
      i++;
     }
  fout.close();
}

      
	
