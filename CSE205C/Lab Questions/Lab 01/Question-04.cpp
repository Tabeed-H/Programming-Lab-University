// Write a program to calculate electricity bill of a consumer using classes.
// THe bill calculation should be following rules:
// 0 - 100 uints 3rs/unit
// 100-500 units 5rs/unit
// 500 - 1000 units 10rs/unit
// >1000 units 15rs/unit

#include <iostream>
using namespace std;


class Consumer{
    private:
        int id;
        double unitsConsumed;
        double totalBill;

    public:
        Consumer():id(0),unitsConsumed(0),totalBill(0){};

        void initializeConsumer(){
            totalBill = 0;
            cout<<"Enter Consumer ID : ";
            cin>>id;
            cout<<"Enter Units Consumed : ";
            cin>>unitsConsumed;
        }

        double generateBill(){
            double tempUnitStorage = unitsConsumed;
            if(unitsConsumed <= 100){
                totalBill = tempUnitStorage * 3;
                return totalBill;
            }

            if(unitsConsumed > 100 && unitsConsumed <= 500){
                totalBill += 100 * 3;
                tempUnitStorage -= 100;

                totalBill += tempUnitStorage * 5;
                return totalBill;
            }

            if(unitsConsumed > 500 && unitsConsumed <= 1000){
                totalBill += 2300;
                tempUnitStorage -= 500;

                totalBill += tempUnitStorage * 10; 
                return totalBill;
            }

            totalBill += 7300;
            tempUnitStorage -= 1000;

            totalBill += tempUnitStorage + 15;
            return totalBill;
        }

        void display(){
            cout<<"---------------------------------------------------------"<<endl;
            cout<<"Consumer ID : "<<id<<endl;
            cout<<"Consumer Units Consumed : "<<unitsConsumed<<endl;
            cout<<"Consumer Total Bill Generated : "<<totalBill<<endl;
            cout<<"---------------------------------------------------------"<<endl;
        }
};

int main(){
    Consumer customer1;
    customer1.initializeConsumer();
    customer1.generateBill();
    customer1.display();

    return 0;
}

// SAMPLE INPUT / OUTPUT
// Enter Consumer ID : 1
// Enter Units Consumed : 250
// ---------------------------------------------------------
// Consumer ID : 1
// Consumer Units Consumed : 250
// Consumer Total Bill Generated : 1050
// ---------------------------------------------------------