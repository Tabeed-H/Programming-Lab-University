#include <iostream>
using namespace std;

int main(){
    int N;
    int hotDays ,pleasantDays, coldDays, sum ;
    double avgTemp;
    hotDays = pleasantDays = coldDays = sum = 0;
    cin>>N;

    int arr[N];

    for(int i = 0; i < N; i++)
        cin>>arr[i];

    for(int i = 0 ; i < N ; i++){
        sum += arr[i];
        if(arr[i] >= 85){
            cout<<arr[i]<<" is a Hot Day"<<endl;
            hotDays++;
        }

        if(arr[i] >= 60 && arr[i] <= 84){
            cout<<arr[i]<<" is a Pleasant Day"<<endl;
            pleasantDays++;
        }

        if(arr[i] < 60){
            cout<<arr[i]<<" is a Cold Day"<<endl;
            coldDays++;
        }
    }

    avgTemp = static_cast <double> (sum) / N;
    cout<<"AVERAGE TEMPERATURE: "<<avgTemp<<"TOTAL NUMBER OF HOT DAYS: "<<hotDays<<"\nTOTAL NUMBER OF PLEASANT DAYS: "<<pleasantDays<<"\nTOTAL NUMBER OF COLD DAYS: "<<coldDays<<endl;

}