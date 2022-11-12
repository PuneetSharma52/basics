#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"Enter n";
    cin>>n;
    
    while (i<=n)
    {   char start=('A'+n-i);
        int j=1;
        while(j<=i){
            cout<<start;
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
