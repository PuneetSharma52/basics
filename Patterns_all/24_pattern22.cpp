#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"Enter n";
    cin>>n;
    // while (i<=n)
    // {   int space=n-i;
    // while(space){
    //     cout<<" ";
    //     space=space-1;
    // }
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            if(j<=(n-i)){
                cout<<" ";

            }
            else{
                cout<<"*";
               }
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    
}
