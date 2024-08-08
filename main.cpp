#include <iostream>
using namespace std;

int main() {
int Eweight;
int Pnum;
double Pweight;

cout << "Your Earth weight in lbs? \n";
cin >> Eweight;
cout << "What planet do you want to fight on? \n";
cin >> Pnum;

switch (Pnum) {
  case 1:
      Pweight = Eweight * .38;
      cout << "Your weight on Mercury is " << Pweight << endl;
    break;
  case 2:
      Pweight = Eweight * .91;
      cout << "Your weight on Venus is " << Pweight << endl;
    break;
  case 3:
      Pweight = Eweight * .38;
      cout << "Your weight on Mars is " << Pweight << endl;
    break;
  case 4:
      Pweight = Eweight * 2.34;
      cout << "Your weight on Jupiter is " << Pweight << endl;
    break;
  case 5:
      Pweight = Eweight * 1.06;
      cout << "Your weight on Saturn is " << Pweight << endl;
    break;
  case 6:
      Pweight = Eweight * .92;
      cout << "Your weight on Uranus is " << Pweight << endl;
    break;
  case 7:
      Pweight = Eweight * 1.19;
      cout << "Your weight on Neptune is " << Pweight << endl;
    break;
  default:
    cout << "Could not find the planet";
    break;
}
}
