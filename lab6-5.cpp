#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

vector<string> split(const string& str, char sep){
    string strr = str;
    vector<string> vec;
    int n = strr.find(sep);
    while (string::npos != n){
        string strrCopy = strr;
        string k = strrCopy.erase(n);
        strr.erase(0, 1);
        vec.emplace_back(k);
        strr.erase(n-k.size(), k.size());
        n = strr.find(sep);
    }
    vec.emplace_back(strr);
    return vec;
}

vector<string> uniqueWords(const string& strr){
    string str;
    map<string, int> map;
    for(int i=0; i<strr.size(); ++i){
        if (strr[i]==' '){
            str += '.';
        }
        if (strr[i]==','){
            str += '.';
        }
        if (strr[i]!=' ' and strr[i]!=','){
            str += strr[i];
        }
    }
    vector<string> v = split(str, '.');
    vector<string> nv;
    int col = 0;
    for (int i=0; i<v.size(); ++i){
        for(int j = 0; j<nv.size(); ++j){
            if(v[i]==nv[j]){
                col = 1;
            }
        }
        if (col==0){
            nv.emplace_back(v[i]);
        }
        col = 0;
    }
    return nv;
}

int main()
{
    vector<string> un = uniqueWords("can,you.can");
    for (int i=0; i<un.size(); ++i){
        cout << un[i] <<endl;
    }
}