//REVATHI OC
//23070123105
//defining a class 
#include<iostream>
using namespace std;
class Car //defining a class called car 
{
    public: //access type
    string maker="Maruti";
    string model="Suzuki";
    int year=2010;
};
int main()
{
    cout<<"1. Defining class"<<endl;
    Car myCar; //creates an object of Car called myCar 
    cout<<"Car details: "<<myCar.maker<<" "<<myCar.model<<"("<<myCar.year<<")"<<endl;
    return 0;
}