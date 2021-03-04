// // Pi +Qj +Rk = max

// #include <iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//   long int n, p, q, r;
//   cin>>n>>p>>q>>r;
//   // cout<<n<<endl<<p<<endl<<q<<endl<<r<<endl;
//   vector<long int>arr;
//   for(int i =0; i<n;i++){
//     long long int temp;
//     cin>>temp;
//     arr.push_back(temp);
//   }
//   // for(auto x: arr){
//   //   cout<<x;
//   // }

//   long long int prefixSum[n];
//   long long int suffixSum[n];
//   prefixSum[0] = arr[0]*p;
//   long long int premax = INT32_MIN ;
//   long long int sufmax = INT32_MIN;
//   suffixSum[n-1] = arr[n-1]*r;
//   for(int i=0; i<n;i++){
//     if(arr[i]*p > premax )  prefixSum[i] = premax;
//   }
//   for(int i=n-1; i>=0;i--){
//     if((arr[i]*r) > (sufmax) ) suffixSum[i] = sufmax;
//   }
//   // for(auto x: prefixSum){
//   //   cout<<x;
//   // }
//   // for(auto x: suffixSum){
//   //   cout<<x;
//   // }
//   long long int ans= INT32_MIN ;
//   for(int j=0; j<n; j++){
//     ans = max(ans,(prefixSum[j]+(q*arr[j])+suffixSum[j]));
//   }
//   cout<<ans;
//   return 0;
// }