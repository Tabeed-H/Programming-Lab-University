#include <iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;

    public:

        // constructors
        Time():hour(0), minute(0), second(0){};     // initialize as 0
        Time(int setHour, int setMinute, int setSecond): hour(setHour), minute(setMinute), second(setSecond){}; // initialize as constant values

        // member functions
        // functions that adds two time object
        // Not a Good Method to add objects
        Time addTime(Time t1, Time t2){
            int hour = t1.getHour() + t2.getHour();
            int minute = t1.getMinute() + t2.getSecond();
            int second =  t1.getSecond() + t2.getSecond();

            if(second > 59){
                second -= 60;
                minute++;
            }

            if(minute > 59){
                minute -= 60;
                hour++;
            }

            if(hour > 23){
                hour -= 24;
            }

            return Time(hour, minute, second);
        }


        // Proper Way Using operator overloading

        Time operator + (Time secondArgument){
            int tempHour = hour + secondArgument.getHour();
            int tempMinute = minute + secondArgument.getSecond();
            int tempSecond =  second + secondArgument.getSecond();

            if(tempSecond > 59){
                tempSecond -= 60;
                tempMinute++;
            }

            if(tempMinute > 59){
                tempMinute -= 60;
                tempHour++;
            }

            if(tempHour > 23){
                tempHour -= 24;
            }

            return Time(tempHour, tempMinute, tempSecond);
        }


        int getHour(){
            return hour;
        }

        int getMinute(){
            return minute;
        }

        int getSecond(){
            return second;
        }

        void display(){
            cout<<hour<<" : "<<minute<<" : "<<second<<endl;
        }

};


int main(){
    Time t1(23,30,0), t2(2, 0, 0);
    Time t3;
    // t3 = t3.addTime(t1, t2);
    t3 = t1 + t2;
    t3.display();

}