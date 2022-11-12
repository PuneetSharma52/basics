#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"Enter n";
    cin>>n;
    int count=1;
    while (i<=n*n)
    {
       cout<<count;    
        if(count%n==0){
            cout<<endl;
        }
         count++;
        i++;
    }
    
}