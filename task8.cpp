#include <iostream>
#include <string>
#include <vector>
using namespace std;

string join(const vector<string>& v, const string& sep){
    string s;
    for (string i: v)
        s = s + i + sep;
    return s.substr(0, s.length()-1);
}

int main()
{
    vector<string> v = {"Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can?"};
    string newString = join(v, " ");
    cout << newString;
    return 0;
}
