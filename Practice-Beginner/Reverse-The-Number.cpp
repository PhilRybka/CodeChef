#include <iostream>
#include <sstream>
using namespace std;

//I noticed string output isn't accepted, you have to output an integer, hence the conversion

int str2int(string str)
{
    stringstream ss;
    int temp;
    ss << str;
    ss >> temp;
    return temp;
}

int main(){
    int n,output2;
    string output="";
    cin>>n;
    for(int i=0;i<n;i++){
            int l;
            cout<<endl;
            cin>>l;
                while(l>0){
                    int l2=l%10;
                    l/=10;
                    char ch=l2+'0';
                    output+=ch;
            }
            output2=str2int(output);
            output="";
            cout<<output2;
    }
}
