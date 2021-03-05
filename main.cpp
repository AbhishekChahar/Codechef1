//PERMUTATION OF A STRING IS PRESENT IN ANOTHER STRING
// 

#include<bits/stdc++.h>
using namespace std;

bool match(int &arr, int &arr2){
  bool same = true;
  for(int i=0 ; i<arr.size() ;i++){
    if(arr[i] != arr2[i]){
      same = false;
    }
  }
  return same;
}

bool permutation_of_string1_present_in_string2(string s1,string s2 ){


  // if(s1.size()>s2.size()){
  //   return false;
  // }

  // int frequency_Count_Array[26] = {};
  // int frequency_Count_Array2[26] = {};

  // int n = s1.size();
  // for(int i=0; i<n; i++){
  //   frequency_Count_Array[s1[i]-'a']++;
  //   frequency_Count_Array2[s2[i]-'a']++;
  // }
  // if(match(frequency_Count_Array,frequency_Count_Array2)){
  //   return true;
  // }

  // for(int i=0 , j=n ; j<n ; i++,j++){
  //   frequency_Count_Array2[s2[i]-'a']-- ;
  //   frequency_Count_Array2[s2[j]-'a']++ ;
    
  //   for(auto x:frequency_Count_Array){
  //     cout<<x;
  //   }
  //   cout<<endl;
  //   for(auto x:frequency_Count_Array2){
  //     cout<<x;
  //   }

  //   if(match(frequency_Count_Array, frequency_Count_Array2)){
  //     return true;
  //   }
  // }

  return false;
}


int main(){

  // string str1, str2;
  // cin>>str1>>str2;
  // // cout<<str1<<endl<<str2<<endl;
  // cout<<permutation_of_string1_present_in_string2(str1,str2);
  int ar1[] = {1,2,3,4,5};
  int ar2[] = {1,2,3,4,5};
  cout<<match(*ar1,*ar2);
  return 0;
}
