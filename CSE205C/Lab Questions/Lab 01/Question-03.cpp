// A program to calculate the volume of a cube using classes
#include <iostream>
using namespace std;

class Cube{
    private:
        double length;
        double volume;

    public :
        Cube():length(0), volume(0){};
        Cube(double l): length(l), volume(0){};

        double getVolume(){
            volume = length * length * length;
            return volume;
        }

        void display(){
            cout<<"---------------------------------------------------------"<<endl;
            cout<<"Length : "<<length<<endl;
            cout<<"volume : "<<volume<<endl;
            cout<<"---------------------------------------------------------"<<endl;
        }
};

int main(){
    double a;
    cout<<"Enter Lenght of Sides of the Cube : ";
    cin>>a;

    Cube myCube(a);
    double temp = myCube.getVolume();
    myCube.display();
}