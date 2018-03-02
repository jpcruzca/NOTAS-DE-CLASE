#include<iostream>
#include<string>
void saludo(std::string a)
{
  std::cout<< " hello " << a << "\n";
  return;
}

int main (void)
{
  std::string b="nombre";
  std::cin >> b;
  saludo(b);
  return 0;
}
