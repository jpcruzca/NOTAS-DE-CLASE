#include<iostream>
#include<vector>
#include<cmath>
//using fptr=double(std::vector<double>,int);
double dev(const std::vector<double>&a, double avg);
double prom(const std::vector<double>&a);
int main(void)
{
  const int N=10;
  std::vector<double> data;
  data.resize(N);
  for(int i=0; i<N;++i)
    {
      data[i]=i;
    }
  avg= prom(data);
  //std::cout<< prom(data)<<std::endl; 
}
double prom(const std::vector<double>&a)
{
  int N=a.size();
  double sum1 =0;
  for(int ii=0; ii<N; ++ii)
    {
      sum1+=data[ii];
    }
 return sum1/N;
}
double dev(const std::vector<double>&a,int &N, double avg)
{
  double sum=0;
  for(int i=0; i<n; ++i)
    {
      sum=((data[i]-avg)*(data[i]-avg));
}
  return std::sqrt(sum/(N-1));
  
}
