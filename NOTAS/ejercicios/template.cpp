#include<iostream>
template <class T> 
T max(T a, T b, T c);
int main()
{
  int a=34,b=13,c=100;
  float x=3.5f,t=7.4f,r=12.43;
  double z=123, y=8888888880,u=5;
  std::cout<<max(a,b,c)<<std::endl;
 std::cout<<max(x,t,r)<<std::endl;
  std::cout<<max(10,10,5)<<std::endl;
  
}
template <class T>
T max(T a, T b, T c)
{
  if(a>b)
    {
      if(a>c)
	return a;
      else
	return c;
    }
  else if(b>c){
    return b;}
  else
    return c;
    
}
