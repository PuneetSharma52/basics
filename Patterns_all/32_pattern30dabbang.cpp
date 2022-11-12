#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"Enter n";
    cin>>n;
    int count=1;
    while (i<=n)
    {   
        int j=1;
        count=1;
        while (j<=n-i+1)
        {
            cout<<count++;
            j++;
        }
        int l=1;
        while (l<=i-1)
        {
             cout<<"**";
             l++;
        }
    

        int k=1;
        int start=(n-i+1);
        while (k<=n-i+1){
            cout<<start;
            start--;
            k++;
        }
        
        
        cout<<endl;
        i++;
    }
    
}
