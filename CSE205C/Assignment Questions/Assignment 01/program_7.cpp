#include <iostream>
using namespace std;

int main(){
    int n = 20;
    for(int i = 0 ; i < n ;i++){
        for(int j = 0; j <= 2*i; j++)
            cout<<"X";
        cout<<endl;
    }
}