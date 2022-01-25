#include <iostream>
using namespace std;

int main(){
    double xCoord, yCoord;
    cout<<"Enter X-coordinate & Y-coordinate"<<endl;
    cin>>xCoord>>yCoord;

    if(xCoord == 0 && yCoord == 0)
        cout<<"Point is at ORIGIN"<<endl;
    else if(xCoord == 0 && yCoord != 0)
        cout<<"On Y-Axis"<<endl;
    else if(xCoord != 0 && yCoord == 0)
        cout<<"On X-Axis"<<endl;
    else if(xCoord > 0 && yCoord > 0)
        cout<<"Point is in Quadrant-I"<<endl;
    else if(xCoord < 0 && yCoord > 0)
        cout<<"Point is in Quadrant-II"<<endl;
    else if(xCoord < 0 && yCoord < 0)
        cout<<"Point is in Quadrant-III"<<endl;
    else if(xCoord > 0 && yCoord < 0)
        cout<<"Point is in Quadrant-IV"<<endl;
    else        
        cout<<"Enter Valid Coordinated"<<endl;

    return 0;
}

// Program OUTPUT
// 
// Enter X-coordinate & Y-coordinate
// -1.0  -2.5  
// Point is in Quadrant-III
// 
// Enter X-coordinate & Y-coordinate
// 0.0  4.8 
// On Y-Axis