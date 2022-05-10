// write a program using classes to calculate area of a circle. create a function getInput() to get input from the radius of the circle and  printArea to display the area of circle

#include <iostream>
using namespace std;

class Circle{
    private:
        double radius;
        double area;

    public:
        Circle():radius(0), area(0){};
        
        void getInput(){
            cout<<"Enter Radius of the Circle : ";
            cin>>radius;
        }

        void calculateArea(){
            area = 3.14 * radius * radius;
        }

        void display(){
            cout<<"---------------------------------------------------------"<<endl;
            cout<<"Area of the Circle is : "<<area<<endl;
            cout<<"---------------------------------------------------------"<<endl;
        }
};

int main(){
    Circle c;
    c.getInput();
    c.calculateArea();
    c.display();

    return 0;
}