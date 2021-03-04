// // Sum OF subaarays
// /*

// N = 3
// A[] = {1, 2, 3}
// Output: 20
// Explanation:
// All subarrays are [1], [2], [3],
// [1,2], [2,3], [1,2,3].
// Thus total sum is 20.

// */

// #include<bits/stdc++.h>
// using namespace std;

// class sol{
//   public:
//   int subarraySum(int *arr, int n){
//   //   int sum=0;
//   //   for(int i=0; i<n; i++){
//   //     sum += arr[i]*(i+1) *(n-i)  ;
//   //   }
//   //   return sum;
//   // }

//   long long int sum=0;
//         long long int contribution = 0;
//         long long m = 10e8+7;
//         for(int i=0; i<n; i++){
//         //   sum += ((a[i]*(i+1))%(10e9+7) *(n-i)%(10e9+7) ) % (10e9+7)  ;
          
//         contribution = ( ( ( arr[i] % (m) ) * ( (i+1) % (m) ) %  (m) ) * ( (n-i) % (m) ) ) % (m)  ;
//         sum =  (sum%m + contribution%m ) %m;               
            
//         }
//         return sum;



// };


// int main(){

//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }

//   sol obj;
//   cout<<obj.subarraySum(arr,  n);

//   return 0;
// }