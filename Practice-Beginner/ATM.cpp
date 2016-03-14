#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int cash;
    float account;
    cin>>cash>>account;
    if(cash%5==0&&cash+0.50<account) {account-=(cash+0.50);cout<<account;}
    else cout<<setprecision(2)<<fixed<<account;

}
