#include <iostream>
using namespace std;

/*
Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.

Write a space.cpp program that helps him keep track of his target weight by:

It should ask him what his earth weight is.
Ask him to enter a number for the planet he wants to fight on.
It should then compute his weight on the destination planet.

Table of conversion:
1 Venus	0.78
2	Mars	0.39
3	Jupiter	2.65
4	Saturn	1.17
5	Uranus	1.05
6	Neptune	1.23
*/

int main() {
  int planet; 
  double weight;
  
  cout << "What is your Earth weight (kg)?\n";
  cin >> weight;
  
  cout << "Please enter a number for the planet you want to fight on:\n"
  << "[1] Venus\n"
  << "[2] Mars\n"
  << "[3] Jupiter\n"
  << "[4] Saturn\n"
  << "[5] Uranus\n"
  << "[6] Neptune\n";
  cin >> planet;
  
  switch(planet) {
    case 1:
      cout << "Your weight on Venus will be " << weight * 0.78 << " kg.\n";
      break;
    case 2:
      cout << "Your weight on Mars will be " << weight * 0.39 << " kg.\n";
      break;
    case 3:
      cout << "Your weight on Jupiter will be " << weight * 2.65 << " kg.\n";
      break;
    case 4:
      cout << "Your weight on Saturn will be " << weight * 1.17 << " kg.\n";
      break;
    case 5:
      cout << "Your weight on Uranus will be " << weight * 1.05 << " kg.\n";
      break;
    case 6:
      cout << "Your weight on Neptune will be " << weight * 1.23 << " kg.\n";
      break;
    default:
      cout << "This entry does not exist in out database.\n";
      break;
  }
  
return 0;
}
