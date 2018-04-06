#include<iostream>
#include<cmath>
using fptr = double(double);
double f(double x); 
double trapezoid(const double a, const double b, const int n, fptr func );
// funcion para integrar ppopr el metodo de los trapecios.
double traperich(const double a, const double b, const int n, fptr func );
int main()
{
  int n=20, n2=40;
  double a=0, b=M_PI;
  std::cout<< n <<"\t"<< trapezoid(a,b,n, f)<< std::endl;
  std::cout<< n2 <<"\t"<< trapezoid(a,b,n2, f)<< std::endl;
  std::cout<< n <<"\t"<< traperich(a,b,n, f)<< std::endl;
  std::cout<< n2 <<"\t"<< traperich(a,b,n2, f)<< std::endl;
  
  return 0;

}
double f(double x)
{
  return std::exp(pow(-x,2));
}
double trapezoid(const double a, const double b, const int n, fptr func )
{
  std::cout.precision(10);
  double h=(b-a)/n;
  double x, sum=0.5*f(a)+f(b);
  for(int i=1; i<=n; i++){
    x=a+i*h;
    sum+=f(x);
   }
  return h*sum;
}
double traperich(const double a, const double b, const int n, fptr func )
{
  return (4*trapezoid(a,b,2*n, func)-trapezoid(a,b,n,func))/3.0;
}

