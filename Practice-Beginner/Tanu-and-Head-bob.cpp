#include <iostream>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    bool isI,isY;
    while(t--){
        cin>>n;
            cin>>s;
            for(int i=0;i<s.size();i++){
                if(s[i]=='I') {isI=true;break;}
                if(s[i]=='Y') {isY=true;break}
            }
            if(isI) cout<<"INDIAN"<<endl;
            else if(isY) cout<<"NOT INDIAN"<<endl;
            else cout<<"NOT SURE"<<endl;
            isI=isY=false;
        }
    }

