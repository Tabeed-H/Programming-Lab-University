// write a c++ class to create a stack. use push() and pop() functions to layout push and pop operations on the stack

#include <iostream>
using namespace std;

#define MAX_STACK 5

class Stack{
    private:
        int arrayStack[MAX_STACK];
        int top;

    public:
        Stack():top(-1){};

        int push(int element){
            if(!(top < MAX_STACK - 1)){
                cout<<"STACK IS FULL!"<<endl;
                return 1;
            }

            arrayStack[++top] = element;
            cout<<"ADDED To Stack"<<endl;
            return 0;
        }

        int pop(){
            if((top < 0)){
                cout<<"STACK Already Empty"<<endl;
                return 1;
            }

            return arrayStack[--top];
        }

        void display(){
            cout<<"---------------------------------------------------------"<<endl;
            cout<<"STACK"<<endl;
            for(int i = 0; i <= top; i++){
                cout<<arrayStack[i]<<endl;
            }
            cout<<"---------------------------------------------------------"<<endl;
        }
};

int main(){
    Stack myStack;

    myStack.push(4);
    myStack.push(2);
    myStack.push(5);
    myStack.push(1);
    myStack.push(0);

    // to stimulate stack overflow
    myStack.push(3);

    // remove last element
    myStack.pop();


    // display stack
    myStack.display();

    return 0;
}
// SAMPLE INPUT / OUTPUT
// ADDED To Stack
// ADDED To Stack
// ADDED To Stack
// ADDED To Stack
// ADDED To Stack
// STACK IS FULL!
// ---------------------------------------------------------
// STACK
// 4
// 2
// 5
// 1
// ---------------------------------------------------------