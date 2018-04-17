#include<iostream>
#include<vector>
const int a=3;
const int b=20;
const int n=b-a;
using fun=int(int);
void fill(std::vector<int> &A);
int cuantos(int a, int b, fun f, std::vector<int> &A);
int primo(int a);
int main()//este codigo imprime un vector lleno de numeros primos;
{
  std::vector<int> V(n);
  // std::cout<<fill(V)<<std::endl;
  fill(V);
  cuantos(a,b,primo,V);
  
  return 0;
}
int primo(int a)
{
  int c;
  for(int i=2; i<n; i++)
    {
      if(n%i==0){
	c=1;
	break;
      }
      else
	c=0;
    }
  return c; 
}
int cuantos(int a, int b, fun f, std::vector<int> &A)
{
  /*el codigo no corre por que se necesitaria memoria dinamica,ya que
    la cantidad de primos que se encuentran en un intervalo [a,b] no es fija
    preguntar */
  for (int i=a; i<b; i++)
    {
      if(f(i)==0){
	A[i]=i;
	std::cout<<A[i]<<std::endl;}
    }
  return 0;
  
}
void fill(std::vector<int> &A)
{
  for(int i=0;i<n; i++)
    {
      A[i]=0;
    }
}

