#include<iostream>
#include<cmath>

int main(void)
{
  double x= 1;
  for( x=-M_PI; x<M_PI ; x= x+0.1 ){ // este ciclo se imprime los datps del seno de intervalo de -pi a pi
      std::cout << x << "\t" <<  std::sin(x) << std::endl;
    }
  return 0;
}
