#include <bits/stdc++.h> 
using namespace std;

string replaceSpaces(string &str){

    string temp="";
    for (int i=0; i<str.size(); i++){
        if (str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main() {
    string input;
    cout << "Enter a string with spaces: ";
    getline(cin, input);

    string result = replaceSpaces(input);
    cout << "String after replacing spaces: " << result << endl;

    return 0;
}
