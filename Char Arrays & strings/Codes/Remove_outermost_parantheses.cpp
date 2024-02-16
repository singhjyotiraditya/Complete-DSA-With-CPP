#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        stack<char> ans;
        string str = "";
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                ans.push(s[i]);
            }
            else
            {
                ans.pop();
                int count = 0;
                while (!ans.empty())
                {
                    str = str + ans.top();
                    ans.pop();
                    count++;
                }
                for (int i = 0; i < count; i++)
                {
                    str = str + ")";
                }
            }
        }
        return str;
    }
};

int main()
{
    Solution sol;
    string s = "(()())((()))";
    cout << "Original: " << s << endl;
    cout << "After removing outer parentheses: " << sol.removeOuterParentheses(s) << endl;
    return 0;
}
