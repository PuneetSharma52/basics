#include<iostream>
using namespace std; 

void ques1(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int sum = 0;
  int i = 0;
  while (i <= n){
    sum += i;
    i+=2;
  }
  cout << "Sum of all evem numbers upto 'n' is: " << sum << endl;
}
int main() {
  
  ques1();
  return 0;
}