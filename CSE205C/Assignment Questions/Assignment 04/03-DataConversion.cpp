// A program to convert meters to feet and vice versa
#include <iostream>
using namespace std;

class Distance{
    int feet;
    float inches;

    public :
        Distance():feet(0),inches(0){};
        Distance(int ft, float inc):feet(ft),inches(inc){};
        Distance(float meters){
            float fFeet = meters * 3.28;
            feet = static_cast<int>(fFeet);
            inches = 12 * (fFeet - feet);
        };

        operator float(){
            float fFeet = inches/12;
            fFeet += static_cast<float>(feet);
            return fFeet/3.28;
        }

        void getDistance(){
            cout<<feet<<" feet"<<" , "<<inches<<" inches"<<endl;
        }
};

int main(){
    Distance f1 ;
    f1 = 2.35;
    f1.getDistance();
}