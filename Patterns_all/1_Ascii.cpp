#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"Enter the value of a:";
    cin>>a;

    if(int(a)>=97 && int(a)<=122){
        cout<<"It is the lower alphabet";
    }
    else if(int(a)<=90 && int(a)>=65){
        cout<<"It is the upper alphabet";
    }
    else if(int(a)>=48 && int(a)<=57){
        cout<<"It is the numeric value";
    }
}