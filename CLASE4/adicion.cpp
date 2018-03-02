#include<iostream>
#include<cmath>
int suma (int a, int b)
{
  int r;
  r=a+b;
  std::cout << &a << std::endl; 
  return 0;
}
int main()
{
  int a, b ,c;
  a=1;
  b=3;
  c = suma(a,b);
  std::cout << &a << std::endl;

}
