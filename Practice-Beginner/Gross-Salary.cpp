#include <iostream>
using namespace std;

/*
In a company an emplopyee is paid as under:
If his basic salary is less than Rs. 1500, then HRA = 10% of base salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary.
NOTE: Gross Salary = Basic Salary+HRA+DA
*/

double salary(int basic){
    double hra,da;
    if(basic<1500){hra=0.1*basic,da=0.9*basic;}
    else {hra=500;da=0.98*basic;}

    return basic+hra+da;
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<salary(n)<<endl;
    }
}
