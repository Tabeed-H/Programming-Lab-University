// Swaping two numbers using classes
#include <iostream>
using namespace std;

class Swap{
    private:
        int number1;
        int number2;

    public:
        Swap():number1(0),number2(0){};
        Swap(int n1, int n2):number1(n1), number2(n2){};

        int doSwap(){
            int temp = number1;
            number1 = number2;
            number2 = temp;

            cout<<"Numbers Swapped"<<endl;
            return 0;
        }

        void display(){
            cout<<"---------------------------------------------------------"<<endl;
            cout<<"Number 1 : "<<number1<<endl;
            cout<<"Number 2 : "<<number2<<endl;
            cout<<"---------------------------------------------------------"<<endl;
        }
};

int main(){
    int a, b;
    cout<<"Enter Two Numbers : ";
    cin>>a>>b;

    Swap numbers(a, b);
    numbers.display();
    numbers.doSwap();
    numbers.display();
}