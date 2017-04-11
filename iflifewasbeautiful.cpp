#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "Please enter your grade: " << endl;
  cin >> x;

  if (x==100)
  {
    cout << "Yay you're a plant. B) But we still like you. :)" << endl;
  }
  else if(x>=90 && x<100){
    cout << "THAT'S AN A! IT'S NOT PERFECT BUT STILL YOU TRIED GG" << endl;
  }
  else if(x>=80 && x<90){
    cout << "B because you are B E A Uuuuuutiful ;)" << endl;
  }
  else if(x>=60 && x<80){
    cout << "C means you are creative in... CHEATING! TAN TAN TAAAAAAAN" << endl;
  }
  else if(x>=50 && x<60){
    cout << "YOU GOT THE D *wink wink*" << endl;
  }
  else
    cout << "You *F*ucked Up :/" << endl;
return 0;
}
