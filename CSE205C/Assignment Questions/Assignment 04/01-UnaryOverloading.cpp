#include <iostream>
using namespace std;

class Counter{
    int count;
    public :
        Counter():count(0){};       // default constructor
        Counter(int n): count(n){}; // one parameter constructor

        // overloading prefix unary operator
        Counter operator ++(){
            return Counter(++count);    // using concept of nameless objects
        }

        // overloading postfix unary operator
        Counter operator ++(int){
            return Counter(count++);
        }

        // function to display
        void getCount(){
            cout<<"Count : "<<count<<endl;
        }
};

int main(){
    Counter c1, c2;
    c2 = c1++;
    c2.getCount();
    c1.getCount();
}