//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
class Rectangle 
{
    private://access type
    double length;
    double width;
    public:
    void setDimensions(double len,double wid) //setting the dimensions
    {
        length=len;
        width=wid;
    }
    double calculateArea()//calculating area
    {
        return length *width;

    }
};
int main()
{
    cout<<"2. Area of rectangle --- class access type"<<endl;
    Rectangle rect;
    rect.setDimensions(5.0,3.0);//calling the functions while giving the parameters 
    cout<<"Area: "<<rect.calculateArea()<<endl;
    return 0;
}