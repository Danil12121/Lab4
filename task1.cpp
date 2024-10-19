#include <iostream>
#include <vector>
using namespace std;

float mean(const vector<float> &a){
    float sum = 0;
    for (int i{}; i < a.size(); ++i)
        sum += a.at(i);
    return sum/a.size();
}
int main()
{
    vector<float> a = {1, 2, 3, 4, 10};
    cout << mean(a) << endl;
    return 0;
}
