#include <iostream>
using namespace std;

int main(){
    int N, largestOfCollection, smallestOfCollection, sum = 0;
    double avgOfCollection;
    cin>>N;
    
    int collection[N];
    
    for(int i = 0; i < N; i++)
        cin>>collection[i];

    largestOfCollection = collection[0];
    smallestOfCollection = collection[0];

    for(int i = 0 ; i < N; i++){
        sum += collection[i];

        if(smallestOfCollection > collection[i])
            smallestOfCollection = collection[i];

        if(largestOfCollection < collection[i])
            largestOfCollection = collection[i];
    }

    avgOfCollection = static_cast <double> (sum) / N;

    cout<<smallestOfCollection<<" "<<largestOfCollection<<" "<<avgOfCollection<<" "<<endl;

}
