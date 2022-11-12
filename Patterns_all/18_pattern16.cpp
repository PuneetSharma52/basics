#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"Enter n";
    cin>>n;
    int count=0;
    while (i<=n)
    {
        int j=1;
        while(j<=i){
            cout<<char('A'+count);
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    
}
