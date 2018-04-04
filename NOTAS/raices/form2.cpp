#include<iostream>
#include<cmath>
double cuadraticaMS(double a, double b,double c);
double cuadraticaMN(double a, double b,double c);
int main()
{
  double a, b ,c;
  std::cout << " ax²+bx+c=0 "<< std::endl;
  std::cin>> a;
  std::cin>> b;
  std::cin>> c;
  std::cout << "r+= "<< cuadraticaMS(a,b,c) <<std::endl;
   std::cout << "r-= "<< cuadraticaMN(a,b,c) <<std::endl;
  
}
double cuadraticaMS(double a, double b,double c)
{
  return (-b+std::sqrt(std::pow(b,2)-4*a*c)*0.5/a);
}
double cuadraticaMN(double a, double b,double c)
{
  return (-b-std::sqrt(std::pow(b,2)-4*a*c)*0.5/a);
}
