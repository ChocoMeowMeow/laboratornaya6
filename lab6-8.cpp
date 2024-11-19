#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> plusesDeleter (vector<int> vec){
    vector<int> vecc;
    for (int i=0; i<vec.size(); ++i){
        if (vec[i]<=0){
            vecc.push_back(vec[i]);
        }
    }
    return vecc;
}

int main()
{
   vector<int> v = {1, 0, -8, -9, 0, 10, 23, -7};
   vector<int> vv = plusesDeleter(v);
   for (int i=0; i<vv.size(); i++){
       cout << vv[i] << endl;
   }
}