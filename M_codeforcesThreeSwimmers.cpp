// //Codeforces 3 swimmers

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;


// class solution{
//   public:
//   long long int wait_time(ll p,ll a, ll b, ll c){
//     ll time_waited;
//     if(p%a==0 || p%b==0 || p%c==0 ){
//       return 0;
//     }
//     else{
//       return min({(a-p%a),(b-p%b),(c-p%c)});
//     }
// // inputCopy
// // 4
// // 9 5 4 8
// // 2 6 10 9
// // 10 2 5 10
// // 10 9 9 9
// // outputCopy
// // 1
// // 4
// // 0
// // 8
//   }

// };

// int main(){

//   ll t;
//   cin>>t;
//   ll p,a,b,c;
//   solution obj;
//   vector<ll>res;
//   while(t--){
//     cin>>p>>a>>b>>c;
//     res.push_back(obj.wait_time(p,a,b,c));
//   }

//   for(auto x: res){
//     cout<<x<<endl;
//   }

//   return 0;
// }