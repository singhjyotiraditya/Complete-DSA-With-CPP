#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int countDigit(int n){
    int count =0;
    while (n!=0){
       n = n/10;
       count++;
    }

    return count;
}

bool checkArmstrong(int n){
	int size = countDigit(n);
    int sum = 0;
    int digit =0;
    int num = n;
    while(n!=0){
        digit  = n%10;
        sum = sum + pow(digit, size);
        n= n/10;
    }
    if (sum == num){
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    int n;
    cin>>n;

    cout<<checkArmstrong(n)<<endl;

    return 0;
}