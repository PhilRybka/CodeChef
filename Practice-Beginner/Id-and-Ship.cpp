#include <iostream>
using namespace std;

void whatShip(char type){
    switch(type){
        case 'B':   cout<<"BattleShip"<<endl;break;
        case 'b':   cout<<"BattleShip"<<endl;break;
        case 'C':   cout<<"Cruiser"<<endl;break;
        case 'c':   cout<<"Cruiser"<<endl;break;
        case 'D':   cout<<"Destroyer"<<endl;break;
        case 'd':   cout<<"Destroyer"<<endl;break;
        case 'F':   cout<<"Frigate"<<endl;break;
        case 'f':   cout<<"Frigate"<<endl;break;
        }
}
int main(){
    int t;
    char type;
    cin>>t;
    while(t--){
        cin>>type;
        whatShip(type);
    }
}
