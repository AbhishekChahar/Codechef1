// // Check Kth bit from right in binary representation of the number


// // void isKthBitSet(int n, int k)
// // {
// //     if (n & (1 << (k - 1)))
// //         cout << "SET";
// //     else
// //         cout << "NOT SET";
// // }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//   int num;
//   cin>>num;
//   vector<int>v;
//   while(num!=0){
//     v.push_back(num%2);
//     num /= 2;
//   }
//   for(auto x: v){
//     cout<<x;
//   }
//   cout<<endl;
//   reverse(v.begin(),v.end());
//   for(auto x:v){
//     cout<<x;
//   }
//   int size = v.size();
//   cout<<endl<<size<<endl;
//   if(v[size - 2] == 1){
//     cout<<"yes";
//   }
//   else{
//     cout<<"NO";
//   }

//   return 0;
// }