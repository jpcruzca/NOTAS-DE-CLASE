#include<iostream>
#include<random>
#include<fstream>
#include<vector>
const int n=10;
const int m=15;
void r(std::vector<int> &a);//este programa es por poco tiempo
int main()
{
  std::vector<int> B(m*n);
  r(B);
  return 0;
}
void r(std::vector<int> &a)
{
  int seed=0;
  std::mt19937 gen(seed);
  std::uniform_int_distribution<int> dis(1,50);
  for(int i=0; i<n; i++)
    {
      for (int j=0; j<m; j++)
	{
	  a[i*m+j]=dis(gen);
	  std::cout<< a[i*m+j]<<" ";
	}
      std::cout<< "\n";
    }
}
