#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   cout<<endl;
   int i = 1;
   int flag = i;
   while(i<=n){
     int s = 1;
     int j = n;
     int k = n;        // Dabangg Pattern
     while(j>=i){
      cout<<" "<<n-j+1<<" ";
      j--;
     }
     while(s<=2*i-2){
      cout<<" * ";
      s++;
     }
     while(k>=i){
      cout<<" "<<k<<" ";
      k--;
     }
      cout<<endl;
      i++;
   }
   return 0;   
}



// #HW Q.1)13:20

// Ans 1) #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the number of Rows";
//     cin>>n;
//     int i=1,count=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//        cout<<endl;
//        i++;

//     }
// }

// #OUTPUT

// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// #HW Q.2)17:09

// Ans 2)#include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int k=1;
//         while(k<=i)
//         {
//             cout<<i+k-1;
//             k++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// #OUTPUT

// 1
// 23
// 345
// 4567
// 56789

// #HW Q.3)27:59

// Ans 3) #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<char('A'+j-1);
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

// #OUTPUT

// A B C
// A B C
// A B C

// #HW Q.4)29:28

// Ans 4)#include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     char start='A';
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<start;
//             start+=1;
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

// #OUTPUT

// A B C
// D E F
// G H I

// #HW Q.5)33:20

// Ans 5)#include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     char start='A';
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<char(start+i+j-2);
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

// #OUTPUT

// A B C
// B C D
// C D E

// #HW Q.6)37:20

// Ans 6) #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     char start='A';
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<char(start);
//             start++;
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

// #OUTPUT

// A
// BC
// DEF
// GHIJ
// KLMNO

// #HW Q.7)42:02

// Ans 7) #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         char START='A'+n-i;
//         while(j<=i)
//         {
//             cout<<START;
//             START++;
//             j++;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

// #OUTPUT

// D
// CD
// BCD
// ABCD

// #HW Q.8)51:56

// Ans 8)#include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=n;
//         while(j>=i)
//         {
//             cout<<"*";
//             j--;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }


// #OUTPUT

// ***
// **
// *
// **
// *

// #HW Q.9)53:02

// Ans 9) #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=n,spaces=1;
//         while(spaces<=i-1)
//         {
//             cout<<" ";
//             spaces++;
//         }
//         while(j>=i)
//         {
//             cout<<"*";
//             j--;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }


// #OUTPUT

// * * * * *
//    * * * *
//       * * *
//          * *
//             * 

// #HW Q.10)53:58

// Ans 10) #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=n,spaces=1;
//         while(spaces<=i-1)
//         {
//             cout<<" ";
//             spaces++;
//         }
//         while(j>=i)
//         {
//             cout<<i;
//             j--;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

// #OUTPUT

//      11111
//        2222
//          333
//            44
//              5

// #HW Q.11)54:10

// Ans 11) #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1,spaces=1;
//         while(spaces<=n-i)
//         {
//             cout<<" ";
//             spaces++;
//         }
//         while(j<=i)
//         {
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

// #OUTPUT

//           1
//         22
//       333
//     4444
//   55555

// #HW Q.12)54:25

// Ans 12)#include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=n,spaces=1,count=i;
//         while(spaces<=i-1)
//         {
//             cout<<" ";
//             spaces++;
//         }
//         while(j>=i)
//         {
//             cout<<count;
//             count++;
//             j--;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

// #OUTPUT

// 1234
//   234
//     34
//       4

// #HW Q.13)54:34

// Ans 13) #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1,count=1;
//     while(i<=n)
//     {
//         int j=1,spaces=1;
//         while(spaces<=n-i)
//         {
//             cout<<" ";
//             spaces+=1;
//         }
//         while(j<=i)
//         {
//             cout<<count;
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

// #OUTPUT

//              1
//         2   3
//      4  5  6
//  7  8  9 10

// #HW Q.14)1:01:43(Dabangg Pattern Question)

// Ans 14) #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=n;
 
//         while(j>=i)
//         {
//             cout<<n-j+1;
//             j--;
//         }
//         j=n;
//         int spaces=1;
//         while(spaces<=2*i-2)
//         {
//             cout<<"*";
//             spaces++;
//         }
//         while(j>=i)
//         {
//             cout<<j-i+1;
//             j--;
//         }

//         cout<<endl;
//         i+=1;
//     }
// }

// #OUTPUT


// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1 