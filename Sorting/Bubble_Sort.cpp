//Bubble SOPRTING: Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until they are in the intended order.Just like the movement of air bubbles in the water that rise up to the surface, each element of the array move to the end in each iteration. Therefore, it is called a bubble sort.

//har iTH round me iTH largest element apne place pe aa jata hai

//Space Complexity: O(1)
//TC:  
//Best Case: ye tab hoga jab pahle iteration me koi bhi swapping na ho aur usi ke liye we used [bool swapped=false;] if swapped=false then break; so tc=O(n)
//Wrost Case tc=O(n^2)

//Bubble Sort is a stable sorting algorithm
//A sorting algorithm is considered stable if it maintains the original order of elements in the case of ties. In bubble sort, this means that two equal elements will be in the same order before and after sorting. For example, the list 1,1,3,2 can be sorted with bubble sort by only swapping the 3 and the 2. The two ones will still be in the same order. 

//Yes, bubble sort is an in-place sorting algorithm. This means that it sorts the given array without using any additional memory. 

#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={10,1,7,6,14,9};
    int n=6;
    
    for (int i=1; i<n; i++){
        bool swapped=false;
        for (int j=0; j<n-i; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if (swapped==false)
        break;
    }
    

    for (int i=0; i<n; i++){
       cout<<arr[i]<<endl;
    }
 return 0;
}