#include<iostream>
#include<string>

class Car
{
    public:
        std::string brand; 
        std::string color;
        int year;
        void startEngine(){
            std::cout<<"The " << color << " " << brand << "'s Engine is now running!\n";
        }
};
    int main(){
        Car myCar;
        myCar.brand="BMW";
        myCar.color = "red";
        myCar.year = 2020;
        
        Car friendsCar;
        friendsCar.brand="Tesla";
        friendsCar.color = "black";
        friendsCar.year = 2021;

        myCar.startEngine();
        friendsCar.startEngine();
        return 0;
    }
