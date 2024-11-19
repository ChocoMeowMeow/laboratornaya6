#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

list<int> reverseNum (list<int> li){
    list<int> lin;
    for (list<int>::iterator it = li.begin(); it != li.end(); ++it){
        int itt = *it;
        lin.emplace_back(0-itt);
        lin.emplace_back(itt);
    }
    return lin;
}

int main()
{
    list<int> nums = {1, 5, 4, -3};
    list<int> numsn = reverseNum(nums);
    for (list<int>::iterator it = numsn.begin(); it != numsn.end(); ++it){
        cout << *it << endl;
    }
}