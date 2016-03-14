#include <iostream>
using namespace std;
 
int sumFirstLastDigit(int n){
    int a,z;
    z=n%10;
    while(n>0){
        a=n%10;
        n/=10;
    }
    return a+z;
}
 
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        cout<<sumFirstLastDigit(n)<<endl;
    }
} 
