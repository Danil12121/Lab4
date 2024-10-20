#include <iostream>
#include <string>
using namespace std;

string replace(const string& str, const string& old, const string& new_str){
    string s = str;
    while (s.find(old) != string::npos){
        int f = s.find(old);
        s = s.substr(0, f) + new_str + s.substr(f + old.length(), s.length() - (f + old.length()));
    }
    return s;
}

int main()
{
    string newString = replace("Can you can a can as a canner can can a can?", "can", "cAN");
    cout << newString;
    return 0;
}
