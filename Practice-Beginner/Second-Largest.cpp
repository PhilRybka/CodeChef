#include <iostream>
#include <algorithm>
using namespace std;
 
int secondNumber(int a, int b, int c){
    int t[3]={a,b,c};
    sort(t,t+3);
    return t[1];
}
int main(){
    int t,a,b,c;;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        cout<<secondNumber(a,b,c)<<endl;
       }
} 
