//Check Vowel or a Consonant Manually
#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    cout<<c<<endl;
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }

}