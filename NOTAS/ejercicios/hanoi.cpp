#include<iostream>
int hanoi(int n, int e, int l , int y);
int main()
{
  int e=1,l=2,y=3;
  int n=5;
  hanoi(n,e,l,y);
  
}
int hanoi(int n, int e, int l , int y)
{
  if(n==1)
    {
      std::cout<< "mueve la ficha "<< n << " desde " << e << " hasta " << y << std::endl;
    }
  else
    {
      hanoi(n-1,e,y,l);
      std::cout<< "mueve la ficha "<< n << " desde " << e << " hasta " << y << std::endl;
      hanoi(n-1,l,e,y);
    }
    
}
