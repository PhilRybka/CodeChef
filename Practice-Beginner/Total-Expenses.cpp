#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t;
    double quantity,price,expenses;
    cin>>t;
    while(t--){
        cin>>quantity>>price;
        expenses=quantity*price;
        if(quantity>1000)expenses*=0.9;
        cout<<setprecision(6)<<fixed<<expenses<<endl;
    }
}
