// //Arr[i] = j 
// //arr[j] = i

// // Input: arr[]  = {1, 3, 0, 2};
// // Output: arr[] = {2, 0, 3, 1};

// #include<bits/stdc++.h>
// using namespace std;

// void usingSpecialNumber(vector<int>&arr){
//   int n = arr.size();
//   for(int i=0; i<n; ++i){
//     arr[arr[i]%n] += i*n;
//     cout<<endl<<" "<<i <<" "<<arr[i]<<" "<<arr[arr[i]]<<endl;
//   }
//   for(int  i=0; i<n;++i){
//     arr[i] /=n;
//   }
// }

// // void rearrangeFunc(vector<int>&v,int i){
// //   int val = -(i+1); // -1
// //   i = v[i] - 1;   // 3-1 =2
// //   while (v[i] > 0) // 3
// //   {
// //       int new_i = v[i] - 1; //2
// //       v[i] = val;            //-1
// //       val = -(i + 1);       //
// //       i = new_i; 
// //     } 
// // }

// // void arrayRearrange(vector<int> &arr){  
             
// //       for(int i=0; i<arr.size();i++){
// //         arr[i]++;
// //       }     
// //       cout<<endl; 
// //       for(auto x:arr){
// //         cout<<x;
// //       } 
// //       cout<<endl;
// //       for(int i=0; i<arr.size();i++){
// //         if(arr[i]>0){
// //           rearrangeFunc(arr,i);
// //         }
// //       }
// //       for(int i=0;i<arr.size(); ++i){
// //         arr[i] = (-arr[i]) -1;
// //       }
//     // }


//     //  void firstApproach(vector<int>&arr){
//       // int N = arr.size();
//       // int array[N];
//       // for(int i=0; i<N;++i){
//       //   array[arr[i]]= i;
//       // }
//       // for(int i=0; i<N;++i){
//       //   arr[i] = array[i];
//       // }

//     // }

// int main(){

//   vector<int>v;
//   int n;
//   int data;
//   cin>>n;
//   for(int i=0;i<n;++i){
//     cin>>data;
//     v.push_back(data);
//   }
//   // firstapproach(v);
//   // arrayRearrange(v);
//   usingSpecialNumber(v);
//   for(auto x:v){
//     cout<<x;
//   }

//   return 0;
// }