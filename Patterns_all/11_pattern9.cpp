#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"Enter n";
    cin>>n;

    while (i<=n)
    {
        // int count=i;
        int j=1;
        while(j<=i){
            // cout<<count<<" ";
            cout<<i+j-1;
            j++;
            // count++;
        }
        cout<<endl;
        i++;
    }
    
}