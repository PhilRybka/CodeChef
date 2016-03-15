#include <iostream>
using namespace std;

bool palindrome(string n){
    int siz=n.size();
    for(int i=0;i<siz/2;i++){
        if(n[i]!=n[siz-1-i]) return false;
    }
    return true;
}
void winOrLoss(string n){
    if(palindrome(n)) cout<<"wins"<<endl;
    else cout<<"losses"<<endl;
}

int main(){
    int t;
    string n;
    cin>>t;
    while(t--){
        cin>>n;
        winOrLoss(n);
    }
}
