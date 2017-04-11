#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
  long long trees, wood, sum, medium, temp, temp2=0;
  scanf("%lld%lld", &trees, &wood);
  long long height[trees];
  for (int i=0;i<trees;i++)
  {
    scanf("%lld", &height[i]);
  }

  sort(height, height + trees);
  temp = height[trees-1];
  do
  {
    medium = (temp+temp2)/2;
    sum = 0;
    for (int k=0;k<trees;k++)
    {
      sum += height[k]>medium ? (height[k]-medium) : 0;
    }
    if (sum < wood)
    {
      temp = medium - 1;
      //medium = (temp2+medium)/ 2;
    }
    else if (sum > wood)
    {
      temp2 = medium  + 1;
    //  medium = (temp + medium)/2;
    }
    else
    {
      break;
    }
  } while(temp2 <= temp);
  printf("%lld\n", medium );// /*<< "The maximum possible height is " <<*/ << medium << endl;
}
