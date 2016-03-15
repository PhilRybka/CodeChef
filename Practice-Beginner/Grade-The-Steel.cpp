#include <iostream>
using namespace std;

/*
A certain grade of steel is graded according to the following conditions.
Hardness must be greater than 50.
Carbon content must be less than 0.7.
Tensile strength must be greater than 5600.

The grades are as follows:

Grade is 10 if all three conditions are met.
Grade is 9 if conditions (i) and (ii) are met.
Grade is 8 if conditions (ii) and (iii) are met.
Grade is 7 if conditions (i) and (iii) are met.
Garde is 6 if only one condition is met.
Grade is 5 if none of three conditions are met.
*/

int grade(int hardness,double carbon,int strength){
    if(hardness>50&&carbon<0.7&&strength>5600) return 10;
    else if(hardness>50&&carbon<0.7) return 9;
    else if(carbon<0.7&&strength>5600) return 8;
    else if(hardness>50&&strength>5600) return 7;
    else if(hardness>50||carbon<0.7||strength>5600) return 6;
    else return 5;
}

int main(){
    int t,hardness,strength;
    double carbon;
    cin>>t;
    while(t--){
        cin>>hardness>>carbon>>strength;
        cout<<grade(hardness,carbon,strength)<<endl;
    }
}
