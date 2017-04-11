#include <iostream>
#include <string>
using namespace std;

struct Koko{
  string name;
  int age;
  float weight;
  bool gender; //true = koritsaros
  Koko * mom;
  Koko * dad;
};

int main()
{
  Koko pp;
  pp.age = 99;

  Koko one;
  one.age = 5;
  one.weight = 2.3;
  one.dad = &pp;
  
  Koko two;
  two.age = 9;
  two.weight = 2.3;

  Koko three;
  three.age = 2;
  three.weight = 2.3;

  three.dad = &one;
  three.mom = &two;

  cout << "Lil chick's mom is " << (*three.mom).name << " and dad is " << (*three.dad).name << endl;
  cout << three.age << " " << (*(*three.dad).dad).age;

  return 0;
}
