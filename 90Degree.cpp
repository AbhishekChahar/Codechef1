// //90 degree rotation

// #include<bits/stdc++.h>
// using namespace std;

// class solution{
//   public:
//   void rotatematrix90(vector<vector<int>> &v){
//     int n = v[0].size();
//     vector<vector<int>>res;
//     for(int i =0 ; i<n; i++){
//       for(int j=0; j<n; j++){
//         res[j][n-i-1]= v[i][j];
//       }
//       // 1  2  3 --> 1  2  3
//       //00 01 02 --> 02 12 22 
//       cout<<endl;
//     }
//     for(int i =0 ; i<n; i++){
//       for(int j=0; j<n; j++){
//         cout<<res[i][j];
//       }
//       // 1  2  3 --> 1  2  3
//       //00 01 02 --> 02 12 22 
//       cout<<endl;
//     }
//   }

// };

// int main(){

//   vector<vector<int>> array2d = {
//     {1,2,3},{4,5,6},{7,8,9}
//   };
//   solution obj;
//   obj.rotatematrix90( array2d );

//   return 0;
// }