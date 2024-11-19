#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <map>
using namespace std;
std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);
std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);
int wordsCounter(const std::string& str);
std::map<std::string, int> wordsMapCounter(std::string);
std::vector<std::string> uniqueWords(const std::string& str);
int diffWordsCounter(std::string);
std::list<int> reverseNum (std::list<int>);
std::vector<int> plusesDeleter (std::vector<int>);
std::list<int> Sort (std::list<int>);

