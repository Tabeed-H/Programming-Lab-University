#include <iostream>
#include <math.h>
using namespace std;

double calculateStandardDeviation(int sum, double avg, int n){
    double meanD = sqrt((sum / n) - (pow(avg, 2)));
    return meanD;
}

int main(){
    int N, largestOfCollection, smallestOfCollection, sum = 0, sumOfSquares = 0, range;
    double avgOfCollection, standardDeviation;
    cin>>N;
    
    int collection[N];
    
    for(int i = 0; i < N; i++)
        cin>>collection[i];

    largestOfCollection = collection[0];
    smallestOfCollection = collection[0];

    for(int i = 0 ; i < N; i++){
        sum += collection[i];
        sumOfSquares += pow(collection[i], 2);

        if(smallestOfCollection > collection[i])
            smallestOfCollection = collection[i];

        if(largestOfCollection < collection[i])
            largestOfCollection = collection[i];
    }

    avgOfCollection = static_cast <double> (sum) / N;
    range = largestOfCollection - smallestOfCollection;
    standardDeviation = calculateStandardDeviation(sumOfSquares, avgOfCollection, N);

   cout<<"1. Smallest of Collection : "<<smallestOfCollection<<"\n2. Largest of Collection : "<<largestOfCollection<<"\n3. Average of Collection : "<<avgOfCollection<<"\n4. Range of Collection : "<<range<<"\n5. Standard Deviation of Collection : "<<standardDeviation<<endl;
}
