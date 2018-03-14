#include<iostream>
long int suma2(int N, int i);
int main(void)
{
  long int N,i;
  
  std::cin>>i;
  std::cin>>N;
  std::cout << suma2(N,i)<< std::endl;
}
long int suma2(int N, int i)
{
  int r=0 ;
  
    do{
      r+=i;
      i++;
    } while(i<=N);	
    
  return r;
}
