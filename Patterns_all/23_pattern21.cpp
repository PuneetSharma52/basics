#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"Enter n";
    cin>>n;
    
    while (i<=n)
    {   char start=('A'+i-1);
        int j=1;
        while(j<=n){
            cout<<start;
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
