//  The National Earthquake Information Center has asked you to write a program implementing the
// following decision table to characterize an earthquake based on its Richter scale number.
// Richter Scale Number (n) Characterization
// n < 5.0 Little or no damage
// 5.0<=n< 5.5 5 Some damage
// 5.5<=n< 6.5 Serious damage: walls may crack or fall
// 5.6<=n< 7.5 Disaster: houses and buildings may collapse
// higher Catastrophe: most buildings destroyed
// Could you handle this problem with a switch statement? If so, use a switch statement; if not,
// explain Why?

#include <iostream>
using namespace std;

int main(){
    double n;
    cout<<"Enter Ricter Scale Reading"<<endl;
    cin>>n;

    if(n >= 7.5)
        cout<<"Catastrophe: most buildings destroyed"<<endl;
    else if(n >= 6.5 && n < 7.5)
        cout<<"Disaster: houses and buildings may collapse"<<endl;
    else if(n >= 5.5 && n < 6.5)
        cout<<"Serious damage: walls may crack or fall"<<endl;
    else if(n >= 5.0 && n < 5.5)
        cout<<"Some damage"<<endl;
    else
        cout<<"Litter or No Damage"<<endl;

    return 0;
}

/*
    We cannot user switch statement to solve this problem because The switch expression must be of an integer or character type but here we can expect floating point numbers
*/

// Program OUTPUT
// 
// Enter Ricter Scale Reading
// 5.78
// Serious damage: walls may crack or fall