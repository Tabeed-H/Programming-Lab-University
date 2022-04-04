#include <iostream>
using namespace std;

class Counter{
    int count;
    public:
        Counter():count(0){};
        Counter(int n):count(n){};

        Counter operator +(Counter);
        bool operator >(Counter);
        bool operator <(Counter);
        bool operator ==(Counter);
        void operator +=(Counter);

        void getCount(){
            cout<<"Count :"<<count<<endl;
        }
};

Counter Counter::operator + (Counter n){
    Counter temp;
    temp.count = count + n.count;
    return temp;
}
bool Counter::operator>(Counter n){
    return count > n.count;
}
bool Counter::operator<(Counter n){
    return count < n.count;
}
bool Counter::operator==(Counter n){
    return count == n.count;
}
void Counter::operator+=(Counter n){
    count += n.count;
}

int main(){
    Counter c1(2), c2(3), c3;
    c3 = c1 + c2;
    c3.getCount();

    cout<<(c3 > c2)<<endl;
    cout<<(c1 < c2)<<endl;
    cout<<(c1 == c3)<<endl;

    c1 += c2;
    c1.getCount();


    return 0;
}