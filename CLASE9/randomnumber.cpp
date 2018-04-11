#include<random>
#include<iostream>
int main(void)
{
  int seed=0;
  std::mt19937 gen(seed);// se fija la semilla 
  std::normal_distribution<> dis(1.5,0.3);//se define la distribucion 
  std::uniform_distribution<> dis1(2,4);
  for(int i=0; i<1000; i++)
    {
      std::cout<<dis(gen)<<std::endl;
    }
}

