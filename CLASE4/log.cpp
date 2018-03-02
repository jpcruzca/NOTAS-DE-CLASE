#include<iostream>
#include<cmath>
int main(void)
{
  double x = 0;
  for(x=0.1;x<=10000;x*=2){
    std::cout << x << "\t" << std::log2 (x)<< std::endl;
  }
      
}
