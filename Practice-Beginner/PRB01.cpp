#include <iostream>
using namespace std;
 
bool prime(int n){
	for(int i=2;i*i<n;i++){
		if(n%i==0)return false;
	}return true;
}
int main(){
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		if(prime(n))cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}	
} 
