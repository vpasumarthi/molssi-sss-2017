#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
  string line;
  double value;
  int row_index = 0;
  int column_index = 0;
  ifstream myfile ("C.data");
  if (myfile.is_open())
  {
    int len = 7;
    float data [len][len];
    while ( getline (myfile,line) )
    {
        double value = std::stod(line);
        data[row_index][column_index] = value;
        column_index++;
        if (column_index == len)
        {
            row_index++;
            column_index = 0;
        }
    }
    
    for (row_index = 0; row_index < len; row_index++)
        for (column_index = 0; column_index < len; column_index++)
        {
            cout << row_index << ", " << column_index << ", " << data[row_index][column_index] << '\n';
        }

    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
