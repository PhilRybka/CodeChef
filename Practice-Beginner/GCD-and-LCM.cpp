#include <iostream>
using namespace std;

int gdc(int a,int b){
   if(b==0) return a;
   return gdc(b,a%b);
}

int main(){
    long long int lcm;
    int a,b,gcd2,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        gcd2=gdc(a,b);
        lcm=(a*b)/gcd2;
        cout<<gcd2<<" "<<lcm<<"\n";
        cin.ignore();
    }
}
