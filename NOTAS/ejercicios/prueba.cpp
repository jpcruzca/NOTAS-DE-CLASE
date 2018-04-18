#include<iostream>
int sum( int n);
int main()
{
  int n=0;
  std::cout<< sum(n) << std::endl;
}
int sum( int n)
{
  if(0==n)
    {
      return 0;
    }
  else
    n+sum(n-1);
}
