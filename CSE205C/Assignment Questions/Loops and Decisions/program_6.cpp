#include <iostream>
using namespace std;

int main(){
    int chairs, guests, arrangements = 1;
    cout<<"Enter Number of Chairs and Number of Guests"<<endl;
    cin>>chairs>>guests;

    for(int i = 0 ; i < chairs; i++)
        arrangements *= guests--;

    cout<<"Total Arrangements : "<<arrangements<<endl;
    return 0;
}