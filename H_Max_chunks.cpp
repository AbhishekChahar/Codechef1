// // max chunks

// #include<bits/stdc++.h>
// using namespace std;

// class solution{
//   public:
//     int maxchunks(vector<int> & array){
//       int ans=0;
//       int n = array.size();
//       int checkarray[n];
//       checkarray[0] = array[0];
//       if(array[0] == 0) ans++;
//       for(int i=1; i<n; i++){
//         checkarray[i] = max(array[i] ,checkarray[i-1]);
//         if(checkarray[i] == i) ans++;
//       }
//       return ans;
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

//   solution sol;
//   cout<<sol.maxchunks(array);

//   return 0;
// }