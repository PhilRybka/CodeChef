#include <iostream>
using namespace std;

int sumOfDigits(int n){
    int sum=0;
    while(n>0){
    int digit=n%10;
    sum+=digit;
    n/=10;
    }
    return sum;
}
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        cout<<sumOfDigits(n)<<endl;
    }
}
