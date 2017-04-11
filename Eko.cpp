#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
  long long trees, wood, sum, medium, top = 0, bottom=0, maxheight=0;
  scanf("%lld%lld", &trees, &wood);
  long long height[trees];
  for (int i=0;i<trees;i++)
  {
    scanf("%lld", &height[i]);
  }

//  sort(height, height + trees);
  for(int i = 0; i < trees; i++){
    top = max(top, height[i]);
  }
  do
  {
    medium = (top+bottom)/2;
    sum = 0;
    for (int k=0;k<trees;k++)
      sum += height[k]>medium ? (height[k]-medium) : 0;

    if (sum < wood) top = medium - 1;
    else if (sum >= wood)
    {
      bottom = medium  + 1;
      maxheight = max(maxheight, medium);
    }
  }while(bottom <= top);

  printf("%lld\n", maxheight);
}
