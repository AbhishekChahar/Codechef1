// 2 - 10 01 00 -3
//3  - 000,001,010,011,100,101,111,110 -5
//4 -              8
//  

// #include<iostream>
// using namespace std;

// int NumberOfNonConsecutive11Strings(int num){
//   if(num == 1){
//     return 2;
//   } 
//   else if(num == 2){
//     return 3;
//   }
//   else{
//     return NumberOfNonConsecutive11Strings(num-1) + NumberOfNonConsecutive11Strings( num -2); 
//   }
// }

// int main(){
//   int n;
//   cin>>n;
//   cout<< NumberOfNonConsecutive11Strings(n)<<endl;
//   return 0;
// }