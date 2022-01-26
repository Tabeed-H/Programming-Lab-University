#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int option;
    double gramsEmittedPerMile, odometerReading;
    double limitsForNew[4] = {3.4, 0.31, 0.4, 0.25}, limitsForOld[4] ={4.2, 0.39, 0.5, 0.31};
    string pollutants[4] = {"Carbon Monoxide", "Hydro-Carbons", "Nitrogen Oxides", "Non-Methane Hydrocarbons"};
   
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<left<<setw(10)<<"S.No"<<setw(40)<<"Pollutant"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<left<<setw(10)<<"1"<<setw(40)<<"Carbon monoxide"<<endl;
    cout<<left<<setw(10)<<"2"<<setw(40)<<"Hydrocarbons"<<endl;
    cout<<left<<setw(10)<<"3"<<setw(40)<<"Nitrogen oxides"<<endl;
    cout<<left<<setw(10)<<"4"<<setw(40)<<"Nonmethane hydrocarbons"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<left<<setw(35)<<"Enter Pollutant S.No."<<setw(5)<<":";
    cin>>option;
    cout<<left<<setw(35)<<"Enter Grams Per Miles Emitted"<<setw(5)<<":";
    cin>>gramsEmittedPerMile;
    cout<<left<<setw(35)<<"Enter Odometer Reading"<<setw(5)<<":";
    cin>>odometerReading;

    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"RESULT : "<<endl;

    if(odometerReading > 0 && odometerReading <= 50000.0){
        if(gramsEmittedPerMile <= limitsForNew[option-1])
            cout<<"Emissions are UNDER the Permitted Level of "<<(limitsForNew[option-1])<<"g/mile "<<" for "<<(pollutants[option-1])<<endl;
        else    
            cout<<"Emissions EXCEEDED the Permitted Level of "<<(limitsForNew[option-1])<<"g/mile "<<" for "<<(pollutants[option-1])<<endl;
    }else if(odometerReading > 50000.0){
         if(gramsEmittedPerMile <= limitsForOld[option-1])
            cout<<"Emissions are UNDER the Permitted Level of "<<(limitsForOld[option-1])<<"g/mile "<<" for "<<(pollutants[option-1])<<endl;
        else    
            cout<<"Emissions EXCEEDED the Permitted Level of "<<(limitsForOld[option-1])<<"g/mile "<<" for "<<(pollutants[option-1])<<endl;
    }else{
        cout<<"Invalid Odometer Reading!"<<endl;
    }

    return 0;
}

// Program OUTPUT
// 
// -----------------------------------------------------------------
// S.No      Pollutant
// -----------------------------------------------------------------
// 1         Carbon monoxide
// 2         Hydrocarbons
// 3         Nitrogen oxides
// 4         Nonmethane hydrocarbons
// -----------------------------------------------------------------
// Enter Pollutant S.No.              :    2
// Enter Grams Per Miles Emitted      :    0.35
// Enter Odometer Reading             :    40112
// -----------------------------------------------------------------
// RESULT :
// Emissions EXCEEDED the Permitted Level of 0.31g/mile  for Hydro-Carbons