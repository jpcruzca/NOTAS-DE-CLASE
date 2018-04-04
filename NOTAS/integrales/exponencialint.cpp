#include<iostream>
#include<cmath>
using fptr = double(double);
double trapezoid(const double a, const double b, const int n, fptr func );
// funcion para integrar ppopr el metodo de los trapecios.
double func(double x);
long double traperich(const double a, const double b, const int n, fptr func );
int main()
{
  std::cout.precision(18);
  int n=100000, n2=2000000;
  double a=-2, b=1000;
  std::cout<< n <<"\t"<< traperich(a,b,n, func)<< std::endl;
  //std::cout<< n2 <<"\t"<< trapezoid(a,b,n2, std::exp)<< std::endl;
  // std::cout<< n <<"\t"<< traperich(a,b,n, std::exp)<< std::endl;
  //std::cout<< n2 <<"\t"<< traperich(a,b,n2, std::exp)<< std::endl;
   //std::cout << "REAL "<< actan(x)*x-0.5* << std::endl;// falta añadir logaritmo natural, para completar el valor exacto de la integral.  
  
  return 0;

}
double func(double x)
{
  return std::exp(-x)*x;
}
double trapezoid(const double a, const double b, const int n, fptr func )
{
  
  double h=(b-a)/n;
  double x, sum=0.5*func(a)+func(b);
  for(int i=1; i<=n; i++){
    x=a+i*h;
    sum+=func(x);
   }
  return h*sum;
}
long double traperich(const double a, const double b, const int n, fptr func )
{
  return (4*trapezoid(a,b,2*n, func)-trapezoid(a,b,n,func))/3.0;
}
