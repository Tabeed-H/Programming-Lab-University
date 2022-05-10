// Write a program to find largest of three numbers using class
#include <iostream>
using namespace std;

class CompareNumber{
    private:
        int number1;
        int number2;
        int number3;

    public:
        CompareNumber():number1(0), number2(0), number3(0){};
        CompareNumber(int n1, int n2, int n3): number1(n1), number2(n2), number3(n3){};

        void compare(){
            if(number1 == number2 && number2 == number3 && number1 == number3){
                cout<<"Numbers are Equivalent\n";
            }else if(number1 > number2 && number1 > number3){
                cout<<number1<<" is the greatest among the three\n";
            }else if(number2 > number1 && number2 > number3){
                cout<<number2<<" is the greatest among the three\n";
            }else{
                cout<<number3<<" is the greatest among the three\n";
            }
        }

        void display(){
            cout<<"---------------------------------------------------------"<<endl;
            cout<<"Number 1 : "<<number1<<endl;
            cout<<"Number 2 : "<<number2<<endl;
            cout<<"Number 3 : "<<number3<<endl;
            cout<<"---------------------------------------------------------"<<endl;
        }
};

int main(){
    int a, b, c;
    cout<<"Enter Three Numbers : ";
    cin>>a>>b>>c;

    CompareNumber numbers(a, b ,c);
    numbers.display();
    numbers.compare();

    return 0;
}