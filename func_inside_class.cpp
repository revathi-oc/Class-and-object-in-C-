//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
class Myself //defining a class 
{
   public: //access type 
   string name="Revathi";
   string surname="Nambiar";
   int date= 15,month=5,year=2004;
   void displayInfo() //method(function) of a class
   {
    cout<<"My details: "<<endl<<name<<" "<<surname<< endl<< "DOB: "<<date<<"/"<<month<<"/"<<year;
   }
};
   int main()
   {
    cout<<"3. Function inside a class"<<endl;
    Myself my;
    my.displayInfo();//calling function of  class 
    return 0;
   }