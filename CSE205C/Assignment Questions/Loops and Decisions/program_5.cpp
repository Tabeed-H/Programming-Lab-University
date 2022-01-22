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
   char opt;
   int flag = 1, totalEmp = 0;
   double  totalSal = 0;
    while(flag){
        int id;
        double hworked, hwage;
        cout<<"Enter\nEmployee ID\tHourly-Wage\tHours-Worked"<<endl;
        cin>>id>>hwage>>hworked;

        Employee emp(id, hwage, hworked);
        totalSal += emp.getNetSal();
        totalEmp++;

        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"Employee ID:\t"<<emp.getID()<<"\nNet Salary:\t"<<emp.getNetSal()<<endl;
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<"Continue? (Y/N)"<<endl;
        cin>>opt;
        if(!(opt == 'Y' || opt == 'y'))
            flag = 0;
    }

    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"TOTAL SALARY DISTRIBUTED:\t"<<totalSal<<endl;
    cout<<"AVERAGE SALARY OF EMPLOYE:\t"<<(totalSal/totalEmp)<<endl;
    cout<<"-------------------------------------------------------------"<<endl;

    return 0;
}