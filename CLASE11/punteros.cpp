#include<iostream>
int main()
{
  int a=10;
  int *ptr=&a;//nullptr => puntero nulo
  std::cout<<a<<std::endl;
  std::cout<<ptr<<std::endl;
  std::cout<<&a<<std::endl;
  std::cout<<*ptr<<std::endl;
  std::cout<<&ptr<<std::endl;
  
  *ptr=25;//modificando el valor de de a desde el puntero
  std::cout<<a<<std::endl;
  std::cout<<ptr<<std::endl;
  std::cout<<&a<<std::endl;
  std::cout<<*ptr<<std::endl;
  std::cout<<&ptr<<std::endl;
  return 0;
}
