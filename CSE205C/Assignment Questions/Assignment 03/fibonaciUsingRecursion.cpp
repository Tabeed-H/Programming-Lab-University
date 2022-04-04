#include <iostream>
using namespace std;

int fib(int n){
    int seriesElement = 0;
    if(n < 0) return seriesElement;
    if(n == 0) return  0;
    else if(n == 1) return 1;
    
    seriesElement = fib(n - 2) + fib(n - 1);
    cout<<seriesElement<<endl;
    return seriesElement;
}

int main(){
    int n;
    cin>>n;
    if(n == 0) cout<<"0"<<endl;
    cout<<"0"<<endl<<"1"<<endl;
    fib(n);
}