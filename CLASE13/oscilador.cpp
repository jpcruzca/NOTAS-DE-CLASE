#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstdlib>
const double w=9.777;
double f(double t, std::vector<double> &y, double id);
void euler(double a, double b, double h, std::vector<double> &y);
int main(void)
{
  const double h=0.0001;
  const double to = 0;
  const double tf = 16.7;
  const int N=2;
  std::vector<double> y = {0.1,5.3};
  euler(to,tf, h, y);
  
}
void euler(double a, double b, double h, std::vector<double> &y)
{
  std::vector<double> yaux(y.size());
  const int N=(b-a)/h;
  for(int nt=0; nt < N; ++nt)
    {
      double t=a+h*nt;
      std::copy(y.begin(), y.end(), yaux.begin());
      for(int id=0; id<y.size(); ++id)
	{
	  y[id]=y[id]+h*f(t, yaux,id);
	}
      std::cout<< t << "  "<< y[0] <<"  "<< y[1] <<std::endl;
    }
}
double f(double t, std::vector<double> &y, double id)
{
  if(0==id)
    {
      return y[1];
    }
  else if(1==id)
    {
      return -w*w*y[0];
    }
  else
    {
      std::cerr << " ERROR " << id << std::endl;
    }
    
}
