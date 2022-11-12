#include<iostream>
using namespace std;
int main()
{
   int sum = 0, product = 1, n;
   cin>>n;
   cout<<endl;
   while(n!=0){
      int digit = 0;
      digit = n%10;
      product*=digit;
      sum+=digit;
      n/=10;
   }
   
   cout<<product-sum<<endl;
   return 0;
}
