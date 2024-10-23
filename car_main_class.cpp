//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
class Car {
    public:
    string maker, model;
    int year;

    void userInput() { 
        cout << "Enter car maker: ";
        cin >> maker;
        cout << "Enter car model: ";
        cin >> model;
        cout << "Enter car manufacturing year: ";
        cin >> year;
    }

    void displayInfo() {
        cout << "Car details: " << maker << " " << model << " " << year << endl;
    }
};

int main() {
    cout<<"4. Print car details using class"<<endl;
    Car myCar;
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}
