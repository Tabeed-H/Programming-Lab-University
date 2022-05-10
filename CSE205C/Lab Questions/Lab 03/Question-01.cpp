#include <iostream>
#include <conio.h>
using namespace std;

#define TOLL 0.50

class TollBooth{
    private:
        unsigned int totalCarsPassed;
        double totalTollCollected;

    public:
        TollBooth():totalCarsPassed(0), totalTollCollected(0){};

        void payingCar(){
            ++totalCarsPassed;
            totalTollCollected += TOLL;
            cout<<"Paying Car Added "<<endl;
        }

        void nonPayingCar(){
            ++totalCarsPassed;
            cout<<"Non-Paying Car Added "<<endl;
        }

        void display() const {
            cout<<"-----------------------------------------------"<<endl;
            cout<<"Total Cars Passed : "<<totalCarsPassed<<endl;
            cout<<"Total Toll Collected : "<<totalTollCollected<<endl;
        }
};

int main(){
    TollBooth toll;
    char option;

    cout<<"Options : "<<endl;
    cout<<"Q    :   To Add a Paying Car"<<endl;
    cout<<"E    :   To Add a Non-Paying Car"<<endl;
    cout<<"Esc  :   To End Program"<<endl;

    cout<<"Enter Option : "<<endl;;

    do{
        option = getch();
        int opt = static_cast<int>(option);
        if(opt == 81 || opt == 113){
            toll.payingCar();
        }else if(opt == 69 || opt == 101){
            toll.nonPayingCar();
        }else if(opt == 27){
            break;
        }else{
            cout<<"Invalid Option!"<<endl;
        }
    }while(1);

    toll.display();

    return 0;
}


// SAMPLE INPUT / OUTPUT
// Options : 
// Q    :   To Add a Paying Car
// E    :   To Add a Non-Paying Car
// Esc  :   To End Program
// Enter Option :
// Paying Car Added 
// Paying Car Added 
// Non-Paying Car Added 
// Paying Car Added 
// Paying Car Added 
// Paying Car Added 
// Non-Paying Car Added 
// Paying Car Added 
// Paying Car Added 
// Paying Car Added 
// Paying Car Added 
// Non-Paying Car Added 
// Paying Car Added 
// Paying Car Added 
// Paying Car Added 
// Non-Paying Car Added 
// Paying Car Added 
// -----------------------------------------------
// Total Cars Passed : 17
// Total Toll Collected : 6.5