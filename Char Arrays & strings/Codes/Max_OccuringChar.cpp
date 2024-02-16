//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int count=0;
        char index;
        vector<int> hash(26,0);
        for (int i=0; i<str.size(); i++){
            hash[str[i]-'a']++;
        }
        for (int i=0; i<hash.size(); i++){
            if (hash[i]>count){
                count = hash[i];
                index=i+'a';
            }
        }
        return index;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends


/*

cin.getline(str, len); : As the output in a char arr stop after null, tab, enter but using this you can output the full string;

Custom Delimiter:
#include <string>

vector<string> getWords(string s){
    vector<string> res;
    int pos = 0;
    while(pos < s.size()){
        pos = s.find("%20");
        res.push_back(s.substr(0,pos));
        s.erase(0,pos+3); // 3 is the length of the delimiter, "%20"
    }
    return res;
}

//
string s = "This%20is%20a%20str2ing.";

Then the output will be:
This
is
a
str2ing.
//

*/

/*
CHAR ARRAY IN-BUILT FUNCTIONS:
-->Length
   int len=strlen(name);

-->compare s1 and s2
    strcmp(s1,s2)
    strcmp() Return Value

      The strcmp() function returns:
      1-->a positive value if the first differing character in lhs is greater than the corresponding character in rhs.
      2-->a negative value if the first differing character in lhs is less than the corresponding character in rhs.
      3-->0 if lhs and rhs are equal.

      Example:
      Comparing Megadeth and Metallica: -1
      Comparing Metallica and Megadeth: 1
      Comparing Megadeth and Megadeth: 0

-->copy strings
   strcpy(dest,src)


//IN CASE OF STRINGS
  length()
  s1.compare(s2)
  s1=s2 //copy
*/