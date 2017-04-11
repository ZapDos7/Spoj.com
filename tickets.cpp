#include <iostream>
using namespace std;

int main ()
{
  int n, A, B, C, D, cost;
  cout << "how many tickets do you want? :D" << endl;
  cin >> n >> A >> B >> C >> D;

  /*if(n==A){
    cout << "You wil pay " << 10*A*0.9 << "euros.";
  }
  if(n==B){
    cout << "You wil pay " << 10*B*0.8 << "euros.";
  }
  if(n==C){
    cout << "You wil pay " << 10*C*0.7 << "euros.";
  }
  if(n==D){
    cout << "You wil pay " << 10*D*0.6 << "euros.";
  }*/

  if(n<A){
   if(n>= A/2){
     cost = A*10*0.9;
     if(cost <= n*10)
      cout << "If you buy " << A << " tickets you pay " << cost << ", which saves you " << n*10-cost << " euros!" << endl;
    else cout << "You pay " << n*10 << " euros." << endl;
   }else cout << "You pay " << n*10 << " euros." << endl;
  }
  else if(n>=A && n<B){
    if(n>=(B-A)/2){
      cost = B*10*0.8;
      if(cost <= n*10*0.9) cout << "If you buy " << B << " tickets you pay " << cost << ", which saves you " << n*10*0.9-cost << " euros!" << endl;
      else cout << "You pay " << n*10*0.9 << " euros." << endl;
    }else cout << "You pay " << n*10*0.9 << " euros." << endl;
  }
  else if(n>=B && n<C){
    if(n>=(C-B)/2){
      cost = C*10*0.7;
      if(cost <= n*10*0.8) cout << "If you buy " << C << " tickets you pay " << cost << ", which saves you " << n*10*0.8-cost << " euros!" << endl;
      else cout << "You pay " << n*10*0.8 << " euros." << endl;
    }else cout << "You pay " << n*10*0.8 << " euros." << endl;
  }
  else if(n>=C && n<D){
    if(n>=(D-C)/2){
      cost = D*10*0.6;
      if(cost <= n*10*0.7) cout << "If you buy " << D << " tickets you pay " << cost << ", which saves you " << n*10*0.7-cost << " euros!" << endl;
      else cout << "You pay " << n*10*0.7 << " euros." << endl;
    }else cout << "You pay " << n*10*0.7 << " euros." << endl;
  }
  else if(n>=D)
    cout << "You pay " << n*10*0.6 << " euros." << endl;
  return 0;
}
