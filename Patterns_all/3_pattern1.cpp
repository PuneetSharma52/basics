#include<iostream>
using namespace std;

int main(){

    int i=1;
    int n;
    cout<<"enter counts of stars per line:";
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<"* ";
            j++;
        }      
        cout<<endl;
        i++; 

        
    }
    
}