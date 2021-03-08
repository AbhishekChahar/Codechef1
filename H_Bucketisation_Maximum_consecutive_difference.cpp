// //Maximum consecutive gaps after sorting
// //Bucketisation--Important
// // below the function naive approach also present. 

// #include<bits/stdc++.h>
// using namespace std;
// class solution{
//   public:
//     int maxDifference(vector<int> &nums){
//       int size = nums.size();
//       if(size<2) return 0;
//       if(size==2) return abs(nums[0]-nums[1]);
//       int res = INT_MIN;
      
//       int maxbuckets[size];
//       int minbuckets[size];
//       int maxele = INT_MIN, minele = INT_MAX;
//       for(int i = 0; i <size;++i){
//         maxele= max(nums[i] , maxele);
//         minele = min(nums[i],minele );
//       }
//       cout<<endl<<"maxelement is: "<<maxele<<endl<<"minelement is: "<<minele;
//       if (maxele ==minele) return 0;
//       int gap = (maxele-minele)/(size-1);
//       if((maxele -minele)%(size-1) != 0){
//         ++gap;
//       } 
//       cout<<endl<<"gap is: "<<gap;
//       for(int i=0; i<size ;i++){
//         maxbuckets[i] = INT_MIN;
//         minbuckets[i] = INT_MAX;
//       }

//       for(int i=0; i<size;++i){
//         int bucket = (nums[i] - minele)/ gap;
//         maxbuckets[bucket] = max(nums[i], maxbuckets[bucket]);
//         minbuckets[bucket]=min(nums[i], minbuckets[bucket]);
//         cout<<endl<<bucket<<" "<<" maxis:"<< maxbuckets[bucket]<<"  minis: "<<minbuckets[bucket];

//       }
//       for(int i=0;i<size;++i){
//         cout<<endl<<"maxis:"<< maxbuckets[i]<<"minis:"<<minbuckets[i];
//       }
//       cout<<endl;

//       int ans = INT_MIN;
//       int prev = INT_MIN;
//       for(int i=0; i<size;i++){
//         if(minbuckets[i] == INT_MAX) continue;
//         if(prev == INT_MIN) prev = maxbuckets[i];
//         else{
//           ans = max(ans,minbuckets[i]-prev);
//           prev = maxbuckets[i];
//         }
//       }
//       return ans;
      
      
      
      
      
      
    
//       // int size = nums.size();
//       // if(size<2) return 0;
//       // sort(nums.begin(),nums.end());
//       // int res = INT_MIN;
//       // for(int i =0; i<size-1 ; ++i){
//       //   res = max(res , nums[i+1] - nums[i]);
//       // }

//       // return res;
//     }
// };
// int main(){
//   vector<int>v;

//   int n;
//   cin>>n;
//   int data;

//   for(int i=0; i<n; ++i){
//     cin>>data;
//     v.push_back(data);
//   }
//   for(auto x:v){
//     cout<<x;
//   }
//   solution obj;
//   cout<<endl<<obj.maxDifference(v);
  
//   return 0;
// }
