// Any character is entered through the keyboard, write a
// program to determine whether the character entered is a
// capital letter, a small case letter, a digit or a special symbol. 

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter Character\n";
    cin>>ch;

    if(ch >= 65 && ch <= 90)
        cout<<"Capital Letter\n";
    else if(ch >= 97 && ch <= 122)
        cout<<"Small Letter\n";
    else if(ch >= 48 && ch <= 57)
        cout<<"Number\n";
    else if((ch >= 0 && ch <=47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch< 96) || (ch >= 123 && ch <= 127))
        cout<<"Special Symbol\n";
    else    
        cout<<"Error!\n";

    return 0;
}