// check whether the number is Even,Odd or Zero
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
    if(n%2==0){
        cout<<"The given number is Even"<<endl;
    }
    else if(n%2!=0){
        cout<<"The given number is Odd"<<endl;
    }
    else{
        cout<<"The given number is Zero"<<endl;
    }
}