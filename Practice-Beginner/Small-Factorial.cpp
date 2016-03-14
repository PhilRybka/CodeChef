#include <iostream>
using namespace std;

long long unsigned factorial(long long n){
    if(n==0) return 1;
    return factorial(n-1)*n;
}

int main(){
    long long unsigned t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<factorial(n)<<endl;
    }
}
