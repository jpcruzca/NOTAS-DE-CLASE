#include<iostream>
long int suma(long int N, long int i);
int suma2(int N);
int main(void)
{
  int N,i;
  
  std::cin>>i;
  std::cin>>N;
  std::cout << suma(N,i)<< std::endl;
  std::cout << suma2(N)<< std::endl;
}
long int suma(long int N, long int i)
{
  //int i;
  int r=0;
  for (i; i<=N; i++)
    {
      r+=i;
    }
  return r;
}
int suma2(int N)
{
  int r=0 ,i=0;
  while(i<=N) 
    {
      r+=i;
      i++;
	
    }
  return r;
}

