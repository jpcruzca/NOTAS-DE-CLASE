#include <fstream>
#include <iostream>
#include <string>

void print(int n, std::string name);

int main()

{
  print(100, "datosfoutj.txt");
  print(200, "datosfoutk.txt");
  return 0;
}
void print(int n, std::string name)
{
  std::ofstream fout(name);//asignar nombre
  fout.precision(18); fout.setf(std::ios::scientific);
  for(int i=1; i<=n;i++)
    {
      fout << i << "\t" << 1.0/i<< "n"<< std::endl;
      
    }
  fout.close();
}
