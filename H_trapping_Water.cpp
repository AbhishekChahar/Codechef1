// // Histogram water tapping

// #include<bits/stdc++.h>
// using namespace std;

// class solution{
//   public:
//     int water(vector<int> & height){
//       int size = height.size();
//       if(size<3)  return 0;
//       else{
//         //2 5 6 7 8 5 3 5
//         int preMax[size];
//         int sufMax[size];
//         preMax[0]=height[0];
//         sufMax[size-1] = height[size-1];
//         for(int i=1; i<size; i++){
//           preMax[i] = max(preMax[i-1] , height[i]);
//         }
//         for(int i=size-2; i>=0; i--){
//           sufMax[i] = max(sufMax[i+1] , height[i]);
//         }
//         int ans=0;
//         int waterlevel;
//         for(int i=1; i<size-1 ; i++){
//           if(height[i]<preMax[i-1] && height[i] < sufMax[i+1] ){
//             waterlevel = min(sufMax[i+1] ,preMax[i-1]);
//             ans += (waterlevel - height[i]);
//           }
//         }
//         return ans;
//       }
//     }
// };

// int main(){

//   vector<int> height ;
//   int size;
//   cin>>size;

//   for(int  i=0; i<size; i++){
//     int temp;
//     cin>>temp;
//     height.push_back(temp);
//   }

//   solution sol;
//   cout<<sol.water(height);

//   return 0;
// }