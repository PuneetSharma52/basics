#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"Enter n";
    cin>>n;
    
    while (i<=n)
    {   int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        int count=i;
        while(j<=(n-i+1)){
            cout<<count;
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    
}