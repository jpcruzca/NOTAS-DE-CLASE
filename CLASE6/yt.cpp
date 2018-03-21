#include<iostream>
#include<cmath>
double posicion(double t, double v_o);
int main()
{
  double t, v_o;
  double g=9.8;
  std::cin>> v_o;
  for (t=0; t<=100; t++)
    {
      std::cout << t << "\t"<< posicion(t,v_o)<< std::endl;
    }
  return 0;
}
double posicion(double t, double v_o)
{
  double y;
  double g=9.8;
  
  y=(v_o*t)+(1/2.0)*(-g)*pow(t,2);
  return y;
    }
