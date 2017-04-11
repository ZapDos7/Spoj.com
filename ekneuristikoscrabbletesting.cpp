#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int sumpoints (int i, int j, int points[])
{
  int sum=0;
  for (int b=i; b<=j; b++)
  {
    sum += points[b];
  }
  return sum;
}

int main ()
{
  int n, k, a, sum1st, sum2nd, max=0; //n pinakas, k mege8os leksewn
  cin >> n >> k;
  cout << "N is " << n << ", K is " << k << endl;
  int points[n];
  //srand(time(NULL));

  for(int i=0; i<n; i++)
  {
    points[i] = (rand()%100 + 1);
//    cin >> points[i];
  }
  /*cout << "Ta points ston pinaka einai ta ekshs: ";
  for(int i=0; i<n; i++)
  {
    cout << points[i] << " ";
  }*/
  cout << "\n";

  for(a=0; a<n-k-1; a++)
  {
    sum1st = 0;
    sum1st = sumpoints(a,a+k-1,points); //pontoi 1hs lekshs
/*    for(int b=a; b<a+k; b++)
    {
      sum1st += points[b];
    }
  //  cout << sum1st << endl;*/
    for(int m=a+k; m<=n-k; m++)
    {
      sum2nd = 0;
      sum2nd = sumpoints(m,m+k-1,points);
    /*  for(int l=m; l<m+k; l++)
      {
        sum2nd += points[l];
      }
    //  cout << sum2nd << endl;*/
      if(sum1st+sum2nd > max) max = sum1st+sum2nd;
    }
  }
  cout << "Oi pontoi einai " << max;
}
