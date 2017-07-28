#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
  string line;
  double value;
  int n, m;
  ifstream myfile ("C.data");
  if (myfile.is_open())
  {
    int len = 7;
    float data [len][len];
    while ( getline (myfile,line) )
    {
     for (n=0; n<len; n++)
         for (m=0; m<len; m++)
         {
             double value = std::stod(line);
             data[n][m] = value;
         }
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
