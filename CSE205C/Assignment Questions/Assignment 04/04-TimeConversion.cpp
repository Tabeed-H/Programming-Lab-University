#include <iostream>
using namespace std;

// class to store time in 24 Hour format
class TimeIn24{
    int hour;
    int min;

    public :
        TimeIn24(): hour(0), min(0){};
        TimeIn24(int hr, int m): hour(hr), min(m){};


        void displayTime(){
            cout<<"Time in 24 Hour Format : "<<endl;
            cout<<hour<<" : "<<min<<endl;
        }

        int getHour(){
            return hour;
        }
        int getMin(){
            return min;
        }

};

// class to store time in 12 Hour format 
class TimeIn12{
    bool am;
    int hour;
    int min;

    public :
        TimeIn12(): am(true), hour(0), min(0){};
        TimeIn12(bool am, int hr, int m): am(am), hour(hr), min(m){};

        TimeIn12(TimeIn24 time){
            min = time.getMin();
            if(time.getHour() > 12){
                hour = time.getHour() - 12;
                am = false;
            }else{
                hour = time.getHour();
                am = true;
            }
        }

        void displayTime(){
            cout<<"Time in 12 Hour Format : "<<endl;
            cout<<hour<<" : "<<min<<" "<<(am ? "am" : "pm")<<endl;
        }

        int getHour(){
            return hour;
        }
        int getMin(){
            return min;
        }

};

int main(){
    TimeIn24 t1(23,59);
    TimeIn12 t2 = t1;
    t2.displayTime();
}