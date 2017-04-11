//TIME MACHINE
#include <iostream>
using namespace std;

int main ()
{
  int H, M, S;
  cin >> H >> M >> S;
  cout << "You imputed " << H << " hours " << M << " minutes " << S << " seconds." << endl;
  H *= 2;
  M *= 2;
  S *= 2;

  if(S > 60)
  {
    M ++;
    S -= 60;
  }
  if (M > 60)
  {
    H ++;
    M -=60;
  }
  if (H > 23)
  {
    cout << "It's been a day and the time will be... ";
    H = H - 23;
  }
  cout << H << ":" << M << ":" << S << endl;  //if x<10, tupwse 0 kai meta to x

}
