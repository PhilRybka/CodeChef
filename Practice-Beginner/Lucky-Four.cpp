#include <iostream>
using namespace std;

int howMany4s(int n){
    int result=0;
    while(n>0){
        int digit=n%10;
        if(digit==4) ++result;
        n/=10;
    }
    return result;
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<howMany4s(n)<<endl;
    }
}
