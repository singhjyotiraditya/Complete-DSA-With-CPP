//Brute Force //TC:O(n1logn)+(n2logn)+(n1+n2) //SC:O(n1+n2)+O(n1+n2)

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    set<int> st;
    for (int i = 0; i < a.size(); i++) {
        st.insert(a[i]);
    }
    for (int i = 0; i < b.size(); i++) {
        st.insert(b[i]);
    }

    vector<int> temp;
    for (auto it : st) {
        temp.push_back(it);
    }

    return temp;
}

int main() {
    // Example usage
    vector<int> vectorA = {3, 1, 4, 1, 5, 9};
    vector<int> vectorB = {2, 6, 5, 3, 5};

    vector<int> result = sortedArray(vectorA, vectorB);

    cout << "Resulting sorted array: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}





