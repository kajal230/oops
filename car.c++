#include <iostream>
#include <string>
using namespace std;
class Car{
    private:
    bool isRunning;
    double fuellevel;
    
    public:
    string model;
    int year;
    int speed;
    Car(){
        fuellevel=100.0;
        isRunning=false;
        speed=0;
        model="2012 Toyota";
        year=2012;
    }
   void startEngine(){
    isRunning=true;
    if(isRunning){
        cout<<"Engine started."<<endl;
    }
   }
    void stopEngine(){
     isRunning=false;
     speed=0;
     if(!isRunning){
          cout<<"Engine stopped."<<endl;
     }
    }
    void accelerate(int amount){
        if(isRunning && fuellevel>0){
            speed+=amount;
            fuellevel-=amount*0.1;
            if(fuellevel<0){
                fuellevel=0;
            }
            cout<<"Car accelerated to "<<speed<<" km/h. Fuel level: "<<fuellevel<<"%"<<endl;
        } else if(!isRunning){
            cout<<"Cannot accelerate. Engine is off."<<endl;
        } else {
            cout<<"Cannot accelerate. Fuel level is too low."<<endl;
        }

    }
    void brake(int amount){
        if(speed>0){
            speed-=amount;
            if(speed<0){
                speed=0;
            }
            cout<<"Car slowed down to "<<speed<<" km/h."<<endl;
        } else {
            cout<<"Car is already stopped."<<endl;
        }
    }
    void refuel(double amount){
        if(amount>0 && amount<=100.0){
            fuellevel+=amount;
            if(fuellevel>100.0){
                fuellevel=100.0;
            }
            cout<<"Car refueled. Current fuel level: "<<fuellevel<<"%"<<endl;
        }
    }
    void printstatus(){
        cout<<"Car Model: "<<model<<endl;
      
        cout<<"Speed: "<<speed<<" km/h"<<endl;
        cout<<"Fuel Level: "<<fuellevel<<"%"<<endl;
        cout<<"Engine Status: "<<(isRunning ? "Running" : "Off")<<endl;
    }

};
int main(){
    Car mycar;
   
    mycar.year=2020;
    mycar.startEngine();
    mycar.accelerate(50);
    mycar.brake(20);
    mycar.printstatus();
    


}