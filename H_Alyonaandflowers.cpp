// //Alyona and Flowers

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//   int array_length , noofsubarray;
//   cin>>array_length>>noofsubarray;
//   int arr[array_length];
//   for(int i =0; i<array_length; i++){
//     cin>>arr[i];
//   }

//   cout<<endl;
//   // for(auto x: arr){
//   //   cout<<x;
//   // }
//   // cout<<endl;
//   int res=0;
//   for(int i=0; i<noofsubarray ; i++){
//     int num1,num2;
//     cin>>num1>>num2;
//     //1,2,3,4,5
//     //9,0,5,7,6
//     int value=0;
//     for(int idx = num1-1; idx <num2 ; idx ++){
      
//       value += arr[idx] ;
//       // cout<<value<<"  "<<idx<<endl;
//     }
//     if(value>0){
//         res += value;
//     } 
//   }

//   cout<<res;
//   return 0;
// }