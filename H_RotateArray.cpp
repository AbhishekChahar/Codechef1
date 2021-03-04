// Rotate array by value k

// #include<bits/stdc++.h>
// using namespace std;

// class solution{
//   public:
//     void ArrayRotate(vector<int> & array, int k){
//       // 1 2 3 4 5
//       // 3 4 5 1 2
//       int n = array.size();
//       k = k% array.size();
//       reverse(array.begin(),array.end());
//       reverse(array.begin(),array.begin()+k);      
//       reverse(array.begin()+k, array.end());


//       // for(int i=0; i<k%n; i++){
//       //   int temp = array[n-1];
//       //   for (int j=n-1; j>0; j--){
//       //     array[j] = array[j-1]; 
//       //   }
//       //   array[0] = temp;
//       // }

//       for(auto x: array){
//         cout<<x;
//       }

//     }
// };

// int main(){

//   vector<int> array;
//   int size;
//   cin>>size;

//   for(int  i=0; i<size; i++){
//     int temp;
//     cin>>temp;
//     array.push_back(temp);
//   }
//   int k;
//   cin>>k;

//   solution sol;
//   sol.ArrayRotate(array,k);

//   return 0;
// }