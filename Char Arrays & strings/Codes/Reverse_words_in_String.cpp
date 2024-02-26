#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string TrimFunction(string str) {
        const char* white = " ";
        str.erase(str.find_last_not_of(white) + 1);
        str.erase(0, str.find_first_not_of(white));
        return str;
    }

    string reverseWords(string s) {
        string ans="";
        s = TrimFunction(s);
        int i=s.length() - 1;
        int j=s.length() - 1;
 
        while(i>=0 && j>=0){
            if (i==0){
                ans = ans+s.substr(i, j-i+1);
                break;
            }
            if (s[j]==' ' && s[i]==' '){
                j--;
                i--;
                continue;
            }
            else if (s[i]==' '){
                ans = ans+s.substr(i+1, j-i)+" ";
                j=i-1;
            }
            i--;  
        }
        return ans;
    }
};

int main() {
    Solution solution;
    string input = "   Hello   World   ";
    string output = solution.reverseWords(input);
    cout << "Output: \"" << output << "\"" << endl;
    return 0;
}
