// void sort012(int a[], int n)
// {   
//     int count0=0;
//     int count1=0;
//     int count2=0;
//     for(int i = 0; i<n;i++){
//         if(a[i]<1)  count0++;
//         else if(a[i]==1) count1++;
//         else count2++;
//     } 
//     for(int j =0; j<count0 ; j++){
//         a[j] = 0;
//     }
//     for(int k =count0; k<count0+count1 ; k++){
//         a[k] = 1;
//     }
//     for(int l =count0+count1; l<count0+count1+count2 ; l++){
//         a[l] = 2;
//     }
// }