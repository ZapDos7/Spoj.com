#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
  long long j, MAXNUM, l=0, MINUM, cases;
  bool flag=true;
  cin >> cases;

  for(int o=0; o<cases; o++){
    cin >> MINUM >> MAXNUM;
    long long p[MAXNUM-MINUM+1]={};
    long long i=MINUM;
    l=0;

    while(i <= MAXNUM) {
      flag = true;
      if(i%2 == 0 || i == 1) i++;
      else{
        for(j=3; (j*j<=i); j=j+2) {
          if(i%j==0) {
            flag = false;
            break;
          }
        }
        if(flag == true){
          p[l] = i;
          l++;
      //    cout << p[l];
        }
        i += 2;
      }
    }
    if(MINUM<3 && MAXNUM>2) cout << "2" << endl;

    for (int i=0; p[i]!=0; i++) cout << p[i] << "\n";
  }
  return 0;
}
