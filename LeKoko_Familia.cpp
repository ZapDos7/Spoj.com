#include <iostream>
#include <string>
using namespace std;

struct Koko{
  string name;
  int age;
  float weight;
  bool gender; //true = koritsaros
};

struct LeKoko{
  Koko MegalosKokos;
  Koko MegalhKoko;
  Koko MikroKoko;
};

int main()
{
  LeKoko coop [30];

  Koko Sym;
  Sym.name = "Sym";
  Sym.age = 2;
  Sym.weight = 5.3;
  Sym.gender = true;

  Koko Zap;
  Zap.name = "Zap";
  Zap.age = 20;
  Zap.weight = 8.9;
  Zap.gender = true;

  Koko Andrew;
  Andrew.name = "Andrew";
  Andrew.age = 18;
  Andrew.weight = 11.7;
  Andrew.gender = false;

  coop[0].MegalosKokos = Andrew;
  coop[0].MegalhKoko = Zap;
  coop[0].MikroKoko = Sym;

  cout << "We present you LeKoko Familiaaaaaaa!!!!!" << "\n\n" << Andrew.name << " + " << Zap.name << " = " << Sym.name << " !!!!!!!" << endl;

  return 0;
}
