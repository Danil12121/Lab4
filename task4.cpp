#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int argmax(const vector<float> &a){
    float ma = numeric_limits<float> :: min();
    int n = -1;
    for (int i=0; i < a.size(); ++i)
        if (a.at(i) > ma){
            ma = a.at(i);
            n = i;
        }
    return n;
}
void sort(vector<float> &a){
    int n = a.size()-1;
    while (n > 0){
        vector<float> b(a.begin(), a.begin()+n+1);
        int m = argmax(b);
        swap(a[n], a[m]);
        n -= 1;
    }
}
int main()
{
    vector<float> a = {3, 1, 2, 100, 23};
    sort(a);
    for (float j: a)
        cout << j << " ";

    return 0;
}
