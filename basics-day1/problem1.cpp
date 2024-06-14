// Whether the given number is Positive, Negative or Zero
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
    if(n==0){
        cout<<"The given number is Zero"<<endl;
    }
    else if(n>0){
        cout<<"The given number is Positive"<<endl;
    }
    else{
        cout<<"The given number is Negative"<<endl;
    }
}