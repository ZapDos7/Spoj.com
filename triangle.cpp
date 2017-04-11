#include <iostream>

using namespace std;

void triangle (int x)
{
  int a, l=0, j, k, i;
  if (x % 2 == 0)
  {
    a = x/2;
  }
  else
  {
    a = x/2 + 1;
  }
  for (i=0;i<a;i++)
  {
    for(k=0;k<l;k++)
    {
      cout << " ";
    }
    for(j=0;j<x;j++){
      cout << "*";
    }
    x -= 2;
    l++;
    cout << endl;
  }
}

int main ()
{
  int i;
  while (1)
  {
  cin >> i;
  triangle(i);
}
  return 0;
}
