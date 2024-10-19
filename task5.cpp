#include <iostream>
#include <vector>
#include <limits>
using namespace std;

bool remove_first_negative_element(vector<int>&vec, int& removed_element){
    for(int i = 0; i < vec.size(); i++){
        if (vec.at(i) < 0){
            removed_element = vec.at(i);
            vec.erase(vec.begin()+i);
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> vec = {3, 1, 2, -4, 100, 23};
    int removed_element = 0;
    bool n = remove_first_negative_element(vec, removed_element);
    cout << n << endl;

    for (float j: vec)
        cout << j << " ";
    cout << endl<< "removed:" << removed_element;
    return 0;
}
