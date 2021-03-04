// //Sum of All Matrices Using Reverse Lookup in 2d
// // i+1 * j+1 * n-i * n-j  * arr[i][j] --> for every a[i][j]


// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//   int n=3;
//   cin>>n;
//   int arr[n][n];
//   for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//       cin>> arr[i][j];
//     }
//   }

//   for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//       cout<<arr[i][j];
//     }
//     cout<<endl;
//   }

//   int sumMatrices = 0;
//   int totalSumMatrices = 0;
//   for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//       sumMatrices= arr[i][j] * (i+1) * (j+1) * (n-i)*(n-j);
//       totalSumMatrices += sumMatrices;
//     }
//   }
//   cout<<totalSumMatrices;

//   return 0;
// }