#include<iostream>

int max(int a, int b)
{
  if (a>b)
    {
    return a;
    }
  else if (b>=a)
	 {
    return b;
	 }
}

int main()
{
  int a, b;
  std::cin >> a;
  std::cin >> b;
  std::cout << max(a,b) << "\n";
  
  return 0;
}
