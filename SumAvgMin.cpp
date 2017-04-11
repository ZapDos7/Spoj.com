#include <iostream>

using namespace std;

int main ()
{
  int n, i;
  double mean, min=99999.0, sum, x;
  cin >> n;
  for (i=0;i<n;i++)
  {
    cin >> x;
    sum += x;
    if(x<min) min = x;
  }

  mean = sum/n;
  cout << "The sum is " << sum << ", the mean is  " << mean << " and the minimum number is " << min << endl;

  return 0;
}
