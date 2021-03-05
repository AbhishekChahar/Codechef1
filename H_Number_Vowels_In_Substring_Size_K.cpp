// //number of Vowels in a substring of length k
// // Sliding Window -- Intialize first window then update on i & j

// #include<bits/stdc++.h>
// using namespace std;

// int numberOfVowelsInSubstringOfLengthK(string str, int k){
//   int res = 0;
//   int n = str.size();
//   int vowels_in_window = 0;
//   for(int i=0 ; i<k ;i++ ){
//     if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
//       vowels_in_window++;
//     }
//   }
//   cout<<"In first window: "<<vowels_in_window<<endl;
//   res = vowels_in_window;
//   for(int i=0 , j = k ; j < n ; i++,j++ ){
//     if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
//       vowels_in_window--;
//     }
//     if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u'){
//       vowels_in_window++;
//     }
//     res= max(vowels_in_window, res);
//     cout<<res<<endl;
//   }
//   return res;
// }


// int main(){

//   int k;
//   string s;
//   cin>>s>>k;
//   cout<<numberOfVowelsInSubstringOfLengthK(s, k)<<" ";
  
//   return 0;
// }