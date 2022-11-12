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
        while(j<=n){
            cout<<char('A'+count);
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    
}
// #include<iostream>
// using namespace std;

// int main(){
//     int i=1;
//     int n;
//     char ch='A';
//     int count=0;
//     for(ch='A';ch<='I';ch++)
//     {
//         ++count;
//         cout<<ch<<"\t";
//         if(count%3==0)
//         {
//             cout<<endl;
//         }
//     }
    
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i=1;
//     int n;
//     char ch='A';
//     int count=0;
//     cout<<"Enter number of rows:\n";
//     cin>>n;
//     for(i=1;i<=(n*n);i++)
//     {
//         ++count;
//         cout<<ch<<"\t";
//         if(count%n==0)
//         {
//             cout<<endl;
//         }
//         ch++;

//     }
// }