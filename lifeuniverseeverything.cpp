#include <iostream>
#include <string>

using namespace std;

int main(){
  int i;
  do{
    scanf("%d", &i);
    if(i < 100){
      if( i != 42 ) printf("%d\n", i);
    }
  }while( i != 42 );
  return 0;
}
