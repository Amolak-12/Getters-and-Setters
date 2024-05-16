#include <iostream>
using namespace std;

class Car{
  private: // Making private members
   int yearModel = 2019;
   int speed = 100;
  public:
    int getModel() {
      return yearModel;
    }
    int getSpeed() {
      return speed;
    }
    void setModel(int y) {
      yearModel = y;
    }
    void setSpeed(int sp) {
      speed = sp;
    }

};
int main() {

  Car fortuner;
  //Using Getter Function 
  cout << "Printing initial values of yearModel and speed : " << endl;
  cout << "Model Year: " << fortuner.getModel() << endl;
  cout << "Speed : " <<fortuner.getSpeed() << " km/h" << endl;
  
  // Using Setter Function
  fortuner.setModel(2020);
  fortuner.setSpeed(180);
  
  //Using Getter Function 
   cout << "Printing setted values of yearModel and speed : " << endl;
  cout << "Model Year: " << fortuner.getModel() << endl;
  cout << "Speed : " << fortuner.getSpeed() << " km/h" << endl;


  
  return 0;
} 

// Getter Function : 
 // It can be used without using setter function.
 // It is used to get the value of private members.
 // Using return keyword in this function we get the private members.

// Setter Function :
 // It can be used without using getter function.
 // It is used to set the value of private members.
 // Using void keyword and taking input in this function we set the private members.