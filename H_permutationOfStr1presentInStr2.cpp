// //PERMUTATION OF A STRING IS PRESENT IN ANOTHER STRING
// //sliding window & frequency array
 

// #include<bits/stdc++.h>
// using namespace std;



// bool permutation_of_string1_present_in_string2(string s1,string s2 ){


//   if(s1.size()>s2.size()){
//     return false;
//   }

//   int frequency_Count_Array[26] = {0};
//   int frequency_Count_Array2[26] = {0};
//   // for(int i=0;i<26;i++){
//   //   cout<<frequency_Count_Array[i];
//   // }
//   // cout<<endl;
//   // for(int i=0;i<26;i++){
//   //   cout<<frequency_Count_Array2[i];
//   // }
//   // cout<<endl;

//   int n = s1.size();
//   for(int i=0; i<n; i++){
//     frequency_Count_Array[s1[i]-'a']++;
//     frequency_Count_Array2[s2[i]-'a']++;
//   }

//   // for(int i=0;i<26;i++){
//   //   cout<<frequency_Count_Array[i];
//   // }
//   // cout<<endl;
//   // for(int i=0;i<26;i++){
//   //   cout<<frequency_Count_Array2[i];
//   // }
//   // cout<<endl<<endl;

//   bool same = true;
//   for(int i=0;i<26;i++){
//     if(frequency_Count_Array[i] != frequency_Count_Array2[i] ){
//       same=false;
//       break;
//     }
//   }
//   if(same){
//     return true;
//   }

//   int i,j;
//   for( i=0 , j=s1.size() ; j<s2.size() ; i++,j++){
//     same =true;
//     frequency_Count_Array2[s2[i]-'a']-- ;
//     frequency_Count_Array2[s2[j]-'a']++ ;
    
//     // cout<<endl;
//     // for(int i=0;i<26;i++){
//     //   cout<<frequency_Count_Array[i];
//     // }
//     // cout<<endl;
//     // for(int i=0;i<26;i++){
//     //   cout<<frequency_Count_Array2[i];
//     // } 
//     // cout<<endl;
  
//     for(int idx =0;idx <26;idx++){
//       if(frequency_Count_Array[idx] != frequency_Count_Array2[idx]){
//         same =  false;  
//       }
//     }
//     if(same){
//       return true;
//     } 
//   }
//   return false;
// }


// int main(){

//   string str1, str2;
//   cin>>str1>>str2;
//   // cout<<str1<<endl<<str2<<endl;
//   cout<<permutation_of_string1_present_in_string2(str1,str2);
  
//   return 0;
// }
