#include <iostream>
using namespace std;

int main ()
{
  int x;
  do{
  cout << "Press \n\t 0 for coffee\t\t\t\t\tPrice: 10$\n\t 1 for juice\t\t\t\t\tPrice: 42$\n\t 2 for the blood of your enemies\t\tPrice: IT'S OVER 90,000!!!\n\t 3 for tea(with cookies of your choice ;) )\tPrice: An exeis ena vasileio dws' to :D\n\t 4 if you don't want anything and you troll us -.-"  << endl;
   cin >> x;
   if(x==0){
    cout << "Starting making coffee... it will be ready in 3 centuries!\n thank you for chosing Ioanela A.E for your coffee :D" << endl;
   }
   else if(x==1){
    cout << "Our hard working giants are currently squeezing the juice out of oranges. Please be patient :)" << endl;
   }
   else if(x==2){
    cout << "If you want it fresh plz visit THE DUNGEONS BENEATH OUR BLOOD BANKS 3:)" << endl;
   }
   else if(x==3){
    cout << "Her Majesty the Queen of England shall accompany you. She likes corgis and chocolate cookies. Do be polite. T_T" << endl;
   }
   else if(x==4){
    cout << "STOP TROLLING US OR WE WILL GET YOUR BLOOD!!!!\nPrice: YOUR HEAD!" << endl;
   }
   else
   {
    cout << "ARE YOU STUPID I SAID 0, 1, 2, 3 OR 4!!" << endl;
   }
 }while(x!=4);
   return 0;
}
