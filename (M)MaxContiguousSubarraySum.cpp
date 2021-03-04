// Abhishek Chahar
// // Maximum sub array contiguous in ARRAY
// // -2 -3  4 -1 -2  1 5 -3
// // -2 -5 -1 -2 -4 -3 2 -1

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//   int arr[] = { -2, -3 , 4, -1, -2 , 1 ,5 ,-3};
//   int arr_size = sizeof(arr)/sizeof(arr[0]);
//   int max_index = 0;
//   int overall_max = arr[0] ;
//   int max = arr[0] ;
//   for(int i = 1; i < arr_size ; i++){
//     max += arr[i];
//     if(overall_max < max){
//       overall_max = max;
//       max_index = i;
//     }
//   }
//   cout<< overall_max <<" "<< max_index ;
//   cout<<endl;
//   int min_index = max_index;
//   int max_sum = arr[max_index];
//   int overall_sum = arr[max_index];
//   for( int j = max_index - 1 ; j >= 0 ; j--){
//     max_sum += arr[j];
//     if( max_sum> overall_sum ){
//       overall_sum = max_sum;
//       min_index = j;
//     } 
//   }
//   cout<<min_index <<" "<<max_index <<" "<<overall_sum;


//   cout<<endl;
//   for(int k = min_index ; k <= max_index ; k++){
//     cout<<arr[k]<<" ";
//   }
//   return 0;
// }