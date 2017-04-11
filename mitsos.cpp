#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a;
  string *p;
  cin >> a;
  p=&a;
  (*p)[2] = ' ';
  cout << *p << endl;
  cout << (*p)[1];
  return 0;
}
