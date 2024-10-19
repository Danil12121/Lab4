#include <iostream>
#include <vector>
#include <limits>
using namespace std;

pair<float, float> minMax(const vector<float> &a){
    pair<float, float> res;
    res.first = numeric_limits<float>::max();
    res.second = numeric_limits<float>::min();
    if (a.size() == 0){
        res.first = numeric_limits<float>::min();
        res.second = numeric_limits<float>::max();
        return res;
        }

    for (float i: a){
        if (i < res.first)
            res.first = i;
        if (i > res.first)
            res.second = i;
    }
    return res;
}

int main()
{
    vector<float> a = {2, 3, 4, 0, 5 ,6 ,4};
    cout << minMax(a).first<< " " << minMax(a).second;
    return 0;
}
