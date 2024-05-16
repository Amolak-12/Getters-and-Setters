#include <iostream>
using namespace std;

class Car{
  private: // Making private members

   int yearModel = 2019;
   int speed = 100;
  
  public: //Making public members

    //Getter function for yearModel
      int getModel() {
        return yearModel;
      }
    //Getter function for speed
      int getSpeed() {
        return speed;
      }
    //Setter function for yearModel
    void setModel(int y) {
        yearModel = y;
      }
    //Setter function for speed
      void setSpeed(int sp) {
        speed = sp;
      }
};
int main() {

  Car fortuner;

  //Using Getter and printing Model Year and Speed
  
    cout << "Printing initial values of yearModel and speed : " << endl;

    cout << "Model Year: " << fortuner.getModel() << endl;
    cout << "Speed : " <<fortuner.getSpeed() << " km/h" << endl;
  
  // Using Setter Function and changing the values of yearModel and speed
    fortuner.setModel(2020);
    fortuner.setSpeed(180);
  
  //Using Getter Function and again printing the changed values of yearModel and speed
  
    cout << "Printing setted values of yearModel and speed : " << endl;
    cout << "Model Year: " << fortuner.getModel() << endl;
    cout << "Speed : " << fortuner.getSpeed() << " km/h" << endl;
  
  return 0;
} 


