#include <fstream>
#include <iostream>
#include <string>

void print(int n, std::string name);
void read(std::string name);

int main()

{
  print(100, "datosfout.txt");
  //print(200, "datosfout2.txt");
  read("datosfout,txt");
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
void read(std::string name)
{
  int n, sumn=0;
  double x=0, sumx=0;
  std::ifstream fin(name);
  while(fin) //es verdadero si termina o hay un error
    {
      fin >> n >> x; //lea primera y segunda columna
      sumn += n;
      sumx += x;
    }
  fin.close();
  std::cout << sumn << "\t" << sumx << std::endl;
}
