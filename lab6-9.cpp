#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

list<int> Sort (list<int> listt){
    list<int> li;
    int sizze = listt.size();
    for (int i=0; i<sizze; i++){
        list<int>:: iterator ma = max_element(listt.begin(), listt.end());
        int maxx = *ma;
        li.push_back(maxx);
        listt.erase(ma);
    }
    return li;
}

int main()
{
    list<int> nums = {1, 5, 4, -3};
    list<int> numsn = Sort(nums);
    for (list<int>::iterator it = numsn.begin(); it != numsn.end(); ++it){
        cout << *it << endl;
    }
}