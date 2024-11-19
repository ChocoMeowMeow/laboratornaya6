#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<int>::iterator findInSorted(vector<int>::iterator first, vector<int>::iterator last, int el){
    for (vector<int>::iterator i = first; i<last; ++i){
        if (*i==el){
            return i;
        }
    }
    return last;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int a;
    int b;
    int element;
    cin >> a;
    cin >> b;
    cin >> element;
    vector<int>::iterator f = v.begin() + a;
    vector<int>::iterator l = v.begin() + b;
    cout << findInSorted(f,l,element)-f << endl;
}