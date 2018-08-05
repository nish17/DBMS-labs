#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{

  ifstream f;
  f.open("data.txt");
  string l;
  // fin.open('./tao-all2.dat');
  while (!f.eof())
  {
    getline(f, l);
    cout << l << endl;
  }

  return 0;
}