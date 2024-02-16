// char a = 'z' ; Only store single characters
// Strings in c++  = 1-D Char Arrays

/*
CHARACTER ARRAY

char ch[20];
cin>>ch;

null character [\0]: a char to be entered in the last of the input string; ASCII Val:0; used as a terminator --> jissse mujhe pata lage ki string kahan pe end ho rahi hai

cout<<ch;
-->print karta ja aur null pe ake ruk ja

NOTE: The execution of CIN stops in case of, /enter, tab, space, null character

*/


/*
//CONVERTING TO LOWERCASE

char toLowerCase(char ch){
    return ch-'A'+'a';   //Yahan par bada ch mane like 'B' to difference 'B'-'A'=1 ayega aur usme 'a'+1='b'
}

char toUpperCase(char ch){
    return ch-'a'+'A';
}
*/


/*
//***NOTE:

As you've known that std::string doesn't contain the null character (and it doesn't copy the null character here).

The point is that you're using std::basic_string::operator[]. According to C++11, std::basic_string::operator[] will return a null character when specified index is equivalent to size().

If pos == size(), a reference to the character with value CharT() (the null character) is returned.

For the first (non-const) version, the behavior is undefined if this character is modified to any value other than charT().
*/


/*
KEY DIFFERENCE BETWEEN Char Array & String
on char arr it stops traversing after '\0' where as in strings it does not, it just ignores '\0' and move forward.
*/


//String Operations: https://cplusplus.com/reference/string/string/

#include <iostream>

int getLength(char name[])
{
    int size = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        size++;
    }
    return size;
}

using namespace std;
int main()
{
    char name[20];
    string test;

    cout << "Enter your name: " << endl;
    cin >> name;

    cout<<"Enter the string: "<<endl;
    cin>>test;

    name[2] = '\0'; // null character
    name[4] = '\0'; 

    test[2]='\0';
    test[4]='\0';

    cout << "Your name is: " << endl;
    cout << name << endl;                    //stop traversing after null

    cout << "Your string  is: " << endl;
    cout << test << endl;                    //do not stop traversing after null



    /*
        int i = 0;
        for (int i = 0; name[i] != '\0'; i++)
        {
            if (name[i] >= 'a' && name[i] <= 'e' && name[i] != '\0')
            {
                cout << name[i] << endl;
            }
        }

     */

    // cout << "size of string --> "<<getLength(name)<<endl;

    // cout<<toLowerCase('D')<<endl;
    // cout<<toUpperCase('y')<<endl;

    return 0;
}

/*
Question Links:
Question Links:
- Length of String
- Reverse a String: https://leetcode.com/problems/reverse... 
- Check Palindrome:https://bit.ly/3E55FvF 
- Valid Palindrome : https://leetcode.com/problems/valid-p... 
- Reverse words: https://leetcode.com/problems/reverse... 
- Maximum occurring character: https://practice.geeksforgeeks.org/pr... 
- Remove all occurrences of substring: https://bit.ly/3sfP71Q 
- Remove all adjacent duplicates: https://leetcode.com/problems/remove-... 
- String Compression: https://leetcode.com/problems/string-... 
- Permutation in Strings: https://leetcode.com/problems/permuta...
- Remove adjacent Duplicates: https://leetcode.com/problems/remove-... 
*/