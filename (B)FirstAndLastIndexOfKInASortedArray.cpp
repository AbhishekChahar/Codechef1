// // subarray with given sum S

// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// int main(){

//   vector<int>arr = {2,3,6,7,7,8,8,8,12};
  
//   int n = arr.size();
//   int k = 8;
//   int idx = -1, last_idx = -1;

//   auto first = lower_bound(arr.begin(), arr.end() , k);
//   auto last = upper_bound(arr.begin(), arr.end(), k);

//   cout<<"IDX"<<*first<<" "<<(first-arr.begin());
//   cout<<"LAST_IDX"<<*last<<" "<<(last-arr.begin());

//   // bool first_time = true;
//   // for (int i= 0; i<n; i++){
//   //   if(arr[i]==k){
//   //     if(first_time){
//   //       idx = last_idx = i;
//   //       first_time = false;
//   //     }
//   //     else{
//   //       last_idx = i;
//   //     } 
//   //   }
//   // }

//   // if(!first_time){
//   //   cout<<"["<<idx<<","<<last_idx<<"]";
//   // }
//   // else{
//   //   cout<<"Not present!";
//   // }

//   return 0;
// }