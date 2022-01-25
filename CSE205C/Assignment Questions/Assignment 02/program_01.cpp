#include <iostream>
#include <iomanip>
using namespace std;

class Purchase{
    private:
        double totalPurchases;
        bool isTeacher;
        double salesTax = 0;
        double teacherDiscount = 0;
        double totalBill = 0;
        int salesTaxRate = 5;
        int teacherDiscountRate;

    public:
        // Constructor Function
        Purchase(double tp){
            totalPurchases = tp;
        }

        // Function Calculates total Bill
        void calculateTotalBill(){
            // if not teacher
            if(!isTeacher){
                salesTax = (salesTaxRate / 100.0) * totalPurchases;
                totalBill = totalPurchases + salesTax;
                return;
            }

            // bill for a teacher
            teacherDiscount = totalPurchases - ((teacherDiscountRate / 100.0) * totalPurchases);
            salesTax = (salesTaxRate / 100.0) * teacherDiscount;
            totalBill = teacherDiscount + salesTax;
        }

        // Setter Functions
        // Sets Customer Type True for Teacher, False for Non-Teacher
        void setIsTeacher(bool choice){
            isTeacher = choice;
            if(!isTeacher)
                teacherDiscountRate = 0;
            if(isTeacher)
                teacherDiscountRate = 12;
        }

        // Getter Functions
        // Gets total Bill
        double getTotalBill(){
            return totalBill;
        }
        // gets Sales Tax Amount
        double getSalesTax(){
            return salesTax;
        }
        // gets Discounet Amount
        double getTeacherDiscount(){
            return teacherDiscount;
        }
        // gets Sales Tax Rate
        int getSalesTaxRate(){
            return salesTaxRate;
        }
        // gets Discount Tax Rate
        int getTeacherDiscountRate(){
            return teacherDiscountRate;
        }

        // Destructor Function
        ~Purchase(){};
};

int main(){
    char isTeacher;
    double amount;

    cout<<"Enter Total Shopping Amount : ";
    cin>>amount;
    cout<<"Is the Shopper a Teacher By Profession (Y/N) : ";
    cin>>isTeacher;

    Purchase customer(amount);

    if(isTeacher == 'Y' || isTeacher == 'y'){
        customer.setIsTeacher(true);
    }else if(isTeacher == 'N' || isTeacher == 'n'){
        customer.setIsTeacher(false);
    }else{
        cout<<"Invalid Option!\nBill Cancelled!"<<endl;
        return 0;
    }

    customer.calculateTotalBill();

    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<left<<setw(20)<<"Total Purchases"<<setw(30)<<"Teacher's Discount %"<<setw(20)<<"Discounted Total"<<setw(20)<<"Sales Tax %"<<setw(20)<<"Sales Tax"<<setw(20)<<"Total Bill"<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<left<<setw(20)<<amount<<setw(30)<<(customer.getTeacherDiscountRate())<<setw(20)<<(customer.getTeacherDiscount())<<setw(20)<<(customer.getSalesTaxRate())<<setw(20)<<(customer.getSalesTax())<<setw(20)<<(customer.getTotalBill())<<endl;

    return 0;

}

// CASE 1
// Program OUTPUT
// 
// Enter Total Shopping Amount : 122
// Is the Shopper a Teacher By Profession (Y/N) : y
// ----------------------------------------------------------------------------------------------------------------------------------------------------
// Total Purchases     Teacher's Discount %          Discounted Total    Sales Tax %         Sales Tax           Total Bill
// ----------------------------------------------------------------------------------------------------------------------------------------------------
// 122                 12                            107.36              5                   5.368               112.728


// CASE 2
// Program OUTPUT
// 
// Enter Total Shopping Amount : 24.90
// Is the Shopper a Teacher By Profession (Y/N) : n
// ----------------------------------------------------------------------------------------------------------------------------------------------------
// Total Purchases     Teacher's Discount %          Discounted Total    Sales Tax %         Sales Tax           Total Bill
// ----------------------------------------------------------------------------------------------------------------------------------------------------
// 24.9                0                             0                   5                   1.245               26.145