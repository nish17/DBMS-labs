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
  float t,h,w;
  double sumt=0,sumh=0,sumw=0;
  cout << "Input Temp, wind:\n";
  cin >> t  >> w ;
  // fin.open('./tao-all2.dat');
  int count = 0;
  // while (!f.eof())
  // while (f >> index >> year >> month >> day >> dmy >> lat >> lng >> a_winds >> b_winds >> humidity >> a_temp >> b_temp)
  while (getline(f, l))
  {
    // getline(f, l);
    // istringstream iss(l);
    //ifstream iss;
    f >> index >> year >> month >> day >> dmy >> lat >> lng >> a_winds >> b_winds >> humidity >> a_temp >> b_temp;
    if((a_temp < t+2 || a_temp > t-2) && (b_winds < w+4 || b_winds > w-4) ){
      cout << "Index: " << index << " Year: " << year << " Month: " << month << " Day: " << day << " dmy: " << dmy << " Lat: " << lat << " Long: " << lng << " a_winds: " << a_winds << " b_winds: " << b_winds << " Humidity: " << humidity << " a_temp: " << a_temp << " b_temp: " << b_temp << endl;
      sumt+=a_temp;
      sumh+=humidity;
      sumw+=b_winds;
      count++;
    }
  }
  f.close();
    cout << "Average temp: " << sumt/count;
    //cout << "\nAverage humidity: " << sumh/count;
    cout << "\nAverage wind: " << sumw/count;
    cout << "\nNumber of Records Found: " << count << endl; 
    if((double(sumt/count) > (double)25) || (double(sumw/count) < (double)0) ) {
      cout << "Sunny\n";
    }
    else{
      cout << "Winter\n";
    }
  return 0;
}