#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int n = chars.size();
        int answerIndex = 0;
        while (i < n) {
            int j = i + 1;

            while (j < n && chars[i] == chars[j]) {
                j++;
            }

            chars[answerIndex++] = chars[i];

            int count = j - i;
            if (count > 1) {
                string cnt = to_string(count);
                for (char ch : cnt) {
                    chars[answerIndex++] = ch;
                }
            }
            i = j;
        }

        return answerIndex;
    }
};

int main() {
    Solution solution;
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int compressedLength = solution.compress(chars);

    cout << "Compressed characters: ";
    for (int i = 0; i < compressedLength; ++i) {
        cout << chars[i] << " ";
    }
    cout << endl;

    return 0;
}
