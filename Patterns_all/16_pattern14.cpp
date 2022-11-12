#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"Enter n";
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while(j<=n){
            cout<<char('A'+i+j-2);
            j++;
        }
        cout<<endl;
        i++;
    }
    
}