#include<random>
#include<iostream>
#include<fstream>
void print(std::string name);
int main(void)
{  
  int seed=0;
  std::mt19937 gen(seed);// se fija la semilla 
  
  // std::uniform_distribution<> dis1(2,4);
  std::weibull_distribution<> dis2(4,5);
  print("normal.txt");
  
}
void print(std::string name)
{
  int seed=0;
  std::mt19937 gen(seed);
  std::normal_distribution<> dis(1.5,0.3);//se define la distribucion 
  //std::weibull_distribution<> dis2(4,5);
  std::ofstream fout(name);
  for(int i=0; i<100000; i++)
    {
      fout<<dis(gen)<<std::endl;
    }
  fout.close();
}
