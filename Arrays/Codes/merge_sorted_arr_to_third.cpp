// #include <iostream>
// #include <set>
// #include <bits/stdc++.h>
// vector < int > sortedArray(vector < int > a, vector < int > b) {
//     int i=0;
//     int j=0;
//     int n1=a.size();
//     int n2=b.size();

//     vector <int> un;
//     while(i<n1 && j<n2){
//         if (a[i]<=b[j]){
//           if (un.size()==0 || un.back() != a[i]) {
//             un.push_back(a[i]);
//           }
//           i++;
//         }
//         else{
//             if (un.size()==0 || un.back() != b[j]) {
//             un.push_back(b[j]);
//           }
//           j++;
//         }
//     }

//     while (i<n1){
//         if (un.size()==0 || un.back() != a[i]) {
//             un.push_back(a[i]);
            
//           }
//           i++;
//     }

//     while (j<n2){
//         if (un.size()==0 || un.back() != b[j]) {
//             un.push_back(b[j]);
            
//           }
//           j++;
//     }
//     return un;
// }