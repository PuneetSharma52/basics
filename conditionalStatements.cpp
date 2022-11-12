#include <iostream>
using namespace std;

void chekCh(){
  char ch;
  cout << "Enter the Character of your choice: "; 
  cin >> ch;
  if(ch >= 'A' && ch <= 'Z'){
    cout << endl << "This is Upper Case.." << endl;
  }
  else if(ch >= 'a' && ch <= 'z'){
    cout << endl << "This is Lower Case.." << endl;
  }
  else if(ch >= '0' && ch <= '9'){
    cout << endl << "This is Numeric.." << endl;
  }
  else{
    cout << endl << "Invalid Input...!" << endl;
  }
}
int main() {
  cout << "Puneet Sharma" << endl << endl;
  chekCh();    // To Check Whether a given charater is lower/upper/numeric
  return 0;
}
