#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(const string& str, char sep){
    vector<string> v;
    string s;
    s += sep;
    string  st = s +str + s;
    int pr_i = 0;
    for (int i = 1; i < st.length(); i++) {
        if (st.substr(i, 1) == s) {
            v.push_back(st.substr(pr_i+1, i-pr_i-1));
            pr_i = i;
        }
    }
    return v;
}

int main()
{
    vector<string> v = split("Can you can a can as a canner can can a can?", ' ');
    for (string i: v)
        cout << "\"" <<  i << "\"" << ", ";
    return 0;
}
