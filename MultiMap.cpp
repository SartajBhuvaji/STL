//TOPIC: Map In C++
/*
NOTES :
1. std::map is associative container that store elements in key value combination
where key should be unique, otherwise it overrides the previous value.
2. It is implement using Self - Balance Binary Search Tree(AVL / Red Black Tree) .
3. It store key value pair in sorted order on the basis of key(assending / decending).
4. std::map is generally used in Dictionay type problems.
*/

//(KEY,VALUE) pair
//SORTED 
//Keys cannot change

#include <iostream>
#include <map>
#include <functional>
#include <vector>
using std::cin;
using std::cout;

int main() {
    std::map<std::string, int> myMap;
    myMap["DEF"] = 10;
    myMap["ABC"] = 20;
    myMap["PQR"] = 40;
    myMap["UVW"] = 30;

    myMap.insert(std::make_pair("GHI", 6));

    for (auto& it : myMap) cout << it.first << "  " << it.second << std::endl;

    myMap["ABC"] = 90;

    cout << myMap["ABC"] << std::endl;

    //
    std::map<std::string, std::vector<int>, std::less<>> myMap1;
    myMap1["Sartaj"].push_back(1);
    myMap1["Sameer"].push_back(2);
    myMap1["Sartaj"].push_back(3);

    for (auto& it1 : myMap1) {
        cout << it1.first << "  " ;
        for (auto& it2 : it1.second) {
            cout << it2 << ", ";
        }
        cout << std::endl;

    }

    return 0;
}