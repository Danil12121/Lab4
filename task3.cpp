#include <iostream>
#include <vector>
#include <limits>
using namespace std;

float argmax(const vector<float> &a){
    float ma = numeric_limits<float> :: min();
    int n = -1;
    for (int i=0; i < a.size(); ++i)
        if (a.at(i) > ma){
            ma = a.at(i);
            n = i;
        }
    return n;
}
int main()
{
    vector<float> a = {1, 2, 100, 23};
    cout << argmax(a) << endl;
    return 0;
}
