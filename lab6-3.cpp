#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int wordsCounter(const string& strr){
    int col = 0;
    string str = strr + ' ';
    for (int i=0; i<str.size(); ++i){
        if (str[i]==' ' or str[i]==',' or str[i]=='.'){
            if (str[i]==' ' and (str[i-1]==',' or str[i-1]=='.' or str[i-1]==' ')){
                continue;
            }
            col += 1;
        }
    }
    return col;
}
int main()
{
    cout << wordsCounter("can you can") << endl;
}