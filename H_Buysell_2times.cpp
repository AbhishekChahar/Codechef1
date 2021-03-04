// // buy sell atmost 2 transactions 
// // find pmaxprofit
// //find smaxprofit
// //calc for i pmaxprofit[i]+smaxprofit[i+1]
// #include<bits/stdc++.h>
// using namespace std;
// class solution{
//   public:
//     int maxprofit(vector<int> &prices){
//         int n = prices.size();
//         int pmin[n];
//         int pprofit[n];
//         int smax[n];
//         int sprofit[n];
        
//         pmin[0] = prices[0];
//         for(int i=1; i<n ; i++){
//             pmin[i] = min(pmin[i-1], prices[i]);
//         }

//         for(auto x: pmin){
//           cout<<x;
//         }
//         cout<<endl;
        
//         pprofit[0] = 0;
//         for(int i=1; i<n ; i++){
//             pprofit[i] = prices[i]-pmin[i-1];      pprofit[i] = max(pprofit[i], pprofit[i-1]) ;
//         }
//         for(auto x: pprofit){
//           cout<<x;
//         }
//         cout<<endl;
//         // 2 5 3 8 5 9 7 
//         // 2 2 2 2 2 2 2
//         //  0 3 1 6 3 7 5
         
//         smax[n-1] = prices[n-1];
//         for(int i=n-2; i>=0 ; i--){
//             smax[i] = max(smax[i+1], prices[i]);
//         }
//         for(auto x: smax){
//           cout<<x;
//         }
//         cout<<endl;
//         sprofit[n-1] = 0;
//         for(int i=n-2; i>=0 ; i--){      
//             sprofit[i] =max(smax[i+1]-prices[i], sprofit[i+1]);
//         }
//         for(auto x: sprofit){
//           cout<<x;
//         }
        
//         int max_profit = pprofit[n-1];
//         int profit_trades;
//         for(int i=1; i<n ; i++){
//             profit_trades = pprofit[i-1]  + sprofit[i];
//             max_profit = max(max_profit , profit_trades);
//         }
        
//         return max_profit;
//     }


// };



// int main(){

//   int n;
//   cin>>n;
//   vector<int> prices;
//   for(int i =0; i<n; i++){
//     int temp;
//     cin>>temp;
//     prices.push_back(temp);
//   } 

//   solution buysell;
//   cout<<buysell.maxprofit(prices);
//   return 0;
// }