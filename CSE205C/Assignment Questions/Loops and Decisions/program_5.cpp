#include <iostream>
using namespace std;

class Employee{
    private:
        int ID;
        double hourlyWage;
        double hoursWorked;
        double netSal;

        void calculateSal(){
            double sal = 0, extra = 0, grossSal;
            if(hoursWorked > 40){
                sal += 40 * hourlyWage;
                extra += (hoursWorked -40) * 1.5 * hourlyWage;
            }else{
                sal += hoursWorked * hourlyWage;
            }

            grossSal = sal + extra;

            netSal = grossSal - ((3.625 / 100) * grossSal);
        }

    public:
        Employee(int id, double hwage, double hworked ){
            ID = id;
            hourlyWage = hwage;
            hoursWorked = hworked;
           
        }


        int getID(){
            return ID;
        }
        double getNetSal(){
            calculateSal();
            return netSal;
        }

};

int main(){
    int id;
    double hworked, hwage;
    cout<<"Enter Employee ID , Hourly-Wage, Hours-Worked"<<endl;
    cin>>id>>hwage>>hworked;

    Employee emp(id, hwage, hworked);

    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"Employee ID: "<<emp.getID()<<"\nNet Salary : "<<emp.getNetSal()<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    
}