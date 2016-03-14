#include <iostream>
#include <iomanip>
using namespace std;

int holeNumber(string s){
    int holes=0;
    for(int i=0;i<s.size();i++){
        switch(s[i]){
            case 'A': ++holes; break;
            case 'B': holes+=2; break;
            case 'O': ++holes; break;
            case 'D': ++holes; break;
            case 'P': ++holes; break;
            case 'R': ++holes; break;
            case 'Q': ++holes; break;
        }
    }
    return holes;
}

int main(){
    int t;
    string word;
    cin>>t;
    while(t--){
            cin>>word;
            cout<<holeNumber(word)<<endl;
    }
}
