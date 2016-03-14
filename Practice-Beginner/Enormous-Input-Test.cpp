#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t,k,n,divisible=0;
    cin>>t>>k;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n%k==0)  ++divisible;
    }
    cout<<divisible;
}
