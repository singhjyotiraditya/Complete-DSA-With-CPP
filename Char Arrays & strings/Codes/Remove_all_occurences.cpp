#include <iostream>
#include <string>

using namespace std;

/*
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos = 0;
        while (pos < s.size()) {
            pos = s.find(part);
            if (pos != string::npos) { // Check if part is found  *****importatnt'
            //The dfault value of string::npos is -1. If pos is not equal to string::npos, it means the substring part was found, and the condition evaluates to true.
                s.erase(s.begin() + pos, s.begin() + pos + part.size());
            } else {
                break; // Exit loop if part is not found
            }
        }
        return s;
    }
};

*/



class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.length() != 0 && s.find(part) < s.size()) {
                s.erase(s.find(part), part.size());
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s = "daabcbaabcbc";
    string part = "abc";
    string result = sol.removeOccurrences(s, part);
    cout << "Resulting string after removing occurrences of 'abc': " << result << endl;
    return 0;
}
