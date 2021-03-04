// //Minimum Swaps to bring the elements less than equal to k together -- using sliding window  4 MARCH

// #include<bits/stdc++.h>
// using namespace std;

// class solution{
//   public:
//   void printarray(int *arr, int n){
//     cout<<endl;
//     for(int i=0; i<n ; i++){
//       cout<<arr[i]<<" ";
//     }
//   }

//   int minSwap(int *arr, int n, int k) {
//     int count = 0;
//     for(int i = 0 ; i < n; i++ ){
//       if(arr[i]<= k)  count++;   
//     }
//     if(count==0) return 0;
//     cout<<endl<<"count: "<<count<<endl;
    
//     int first_window_count = 0;   // you can also think of the opposite and take the count of number greater than k
//     for(int i = 0 ; i<count ; i++){
//       if(arr[i]<=k) first_window_count++;   
//     }
//     int max_count_window = first_window_count;
//     for(int i = 0, j=count; j<n ; i++,j++){
//         if(arr[i]<= k ){
//           first_window_count--;
//         }
//         if(arr[j]<=k){
//           first_window_count++;
//         }
//         max_count_window = max(max_count_window , first_window_count);
//         cout<<"mcw: "<<max_count_window <<endl;
//     }
//     return count-max_count_window;    
      
// }

// };

// int main(){

//   int arr[] = {2,1,5,6,3};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   int k=3;
//   cout<<"size is:"<<n<<endl<<"value of k:"<<k;
//   // cin>>n>>k; 
//   solution obj;
//   obj.printarray(arr, n);
//   cout<<" "<<obj.minSwap(arr,  n,  k);

//   return 0;
// }