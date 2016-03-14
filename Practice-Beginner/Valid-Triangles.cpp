#include <iostream>
using namespace std;
 
bool valid(int a, int b, int c){
    if((a+b+c)==180) return true;
    return false;
}
int main(){
    int t,a,b,c;;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if(valid(a,b,c)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        cin.ignore();
    
    }
} 
