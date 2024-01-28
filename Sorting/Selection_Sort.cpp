//smallest element ko uthake 1st element se swap karte hain phir banki bachi hui arr se smallest element nikal ke 2nd se swap and repeat 

/*
Example: 
arr[] = 64 25 12 22 11

Round 1: 11 25 12 22 64  //Phle round me i=0 se last tak pure array me lowest elemnt se i=0 ko swap kar denge aur i++ kar denge (11,64)

Round 2: 11 12 25 22 64 //ab i=1 se last tak me smallest ko i=1 se swap kar denge (25,12)

Round 3: 11 12 22 25 64 //(22,25)

Round 4: 11 12 22 25 64 //25 ko 25 se swap kardiya

[Total no of rounds = n-1]
*/

//Space Comlexity: O(1)
//Time Complexity: Worst & Best Case:O(n^2)
//Whenever small size arr

#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={64,25,12,22,11};
    int n=5;
    for (int i=0; i<n-1; i++){
        int minInd=i;
        for (int j=i+1; j<n; j++){
             if (arr[j]<arr[minInd]){
                minInd=j;
             }
        }
        swap(arr[i],arr[minInd]);
    }

    for (int i=0; i<n; i++){
       cout<<arr[i]<<endl;
    }
    
 return 0;
}
