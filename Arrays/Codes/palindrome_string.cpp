/*

#include <bits/stdc++.h>

bool checkPalindrome(string s)
{
    int n = s.size();
    int j = n - 1;
    int i = 0;
    while (i <= j)
    {
        if ((tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z') || (s[i] >= '0' && s[i] <= '9'))  ///***Here s[i] >= '0' to be noted 
        {
            if (!((tolower(s[j]) >= 'a' && tolower(s[j]) <= 'z') || (s[j] >= '0' && s[j] <= '9')))
            {
                j--;
                continue;
            }
            if (tolower(s[i]) != tolower(s[j]))
            {
                return false;
            }
            else
            {
                i++;
                j--;
            }
        }
        else
        {
            i++;
        }
    }
    return true;
}
*/