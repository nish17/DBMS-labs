#include <bits/stdc++.h>
#include <fstream>
#include <string>
using namespace std;

int main()
{

  ifstream f;
  f.open("data.txt");
  string l;
  int index, year, month, day;
  long int dmy;
  float lat, lng, a_winds, b_winds, humidity, a_temp, b_temp;
  // fin.open('./tao-all2.dat');
  // int c = 0;
  // while (!f.eof())
  // while (f >> index >> year >> month >> day >> dmy >> lat >> lng >> a_winds >> b_winds >> humidity >> a_temp >> b_temp)
  while (getline(f, l))
  {
    // getline(f, l);
    istringstream iss(l);
    iss >> index >> year >> month >> day >> dmy >> lat >> lng >> a_winds >> b_winds >> humidity >> a_temp >> b_temp;
    cout << "Index: " << index << " Year: " << year << " Month: " << month << " Day: " << day << " dmy: " << dmy << " Lat: " << lat << " Long: " << lng << " a_winds: " << a_winds << " b_winds: " << b_winds << " Humidity: " << humidity << " a_temp: " << a_temp << " b_temp: " << b_temp << endl;
    // c++;
    // if (c == 10)
    // break;
  }

  return 0;
}