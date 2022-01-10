// Given the length and breadth of a rectangle, write a program to
// find whether the area of the rectangle is greater than its
// perimeter. For example, the area of the rectangle with length = 5
// and breadth = 4 is greater than its perimeter. 

#include <iostream>
using namespace std;

class Rectangle{
    private:
        int lenght;
        int breadth;

   public:
        Rectangle(int l, int b){
            lenght = l;
            breadth = b;
        };

        int area(){
            return lenght * breadth;
        }

        int perimeter(){
            return 2 * (lenght + breadth);
        }
};

int main(){
    int inputLenght, inputBreadth;
    cout<<"Input Lenght and Breadth of the Rectangle\n";
    cin>>inputLenght>>inputBreadth;

    Rectangle rec_1(inputLenght, inputBreadth);
    
    if(rec_1.area() > rec_1.perimeter())
        cout<<"Area of the Rectangle is Greater than its Perimeter\n";
    else if (rec_1.area() < rec_1.perimeter())
        cout<<"Area of the Rectangle is Less than its Perimeter\n";
    else
        cout<<"Area of the Rectangle is Equal than its Perimeter\n";

    return 0;
}