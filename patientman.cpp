#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
  int x, mistake=0;//, i;
  while(1)//for (i=0;i<20;i++)
  {
    cout << "Enter number: " << mistake << endl;
    cin >> x;
    if (x != mistake)
    {
      mistake++;
      cout << "Das not right!" << endl;
    }
    else
    {
      cout << "OK!" << endl;
      break;
    }
    /*if(i == 9)
    {
      cout << "Wow, you're more patient than I am. You win!" << endl;
      break;
    }*/
  }
  cout << "\nERROR 404!\nShutting Down.....";
  return 0;
}
