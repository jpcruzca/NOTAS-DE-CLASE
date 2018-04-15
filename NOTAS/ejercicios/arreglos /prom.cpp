#include<iostream>
#include<vector>
#include<cmath>
double avg(std::vector<double> &a);
double dev(std::vector<double> &a, double avg);
const int N=10;
int main()//con este codigo se calcula el promedio y la desviacion stdr de datos
{
  double av=0;
  std::vector<double> data(N);
  for(int i=0; i<N; i++)
    {
      data[i]=i+1;
      //std::cout<<data[i]<<std::endl;
    }
  std::cout<< avg(data) << std::endl;
  av=avg(data);
  std::cout<< dev(data,av) << std::endl;
}
double avg(std::vector<double> &a)
{
  double sum;
  for(int i=0; i<N; i++)
    {
      sum+=a[i];
    }
  return sum/N;
}
double dev(std::vector<double> &a, double avg)
{
  double sum=0;
  for (int i=0; i<N;i++)
    {
      sum+=(a[i]-avg)*(a[i]-avg);
    }
  return std::sqrt(sum/(N-1));
  
}

