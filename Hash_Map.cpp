//STL UNORDERED MAP / HASH-MAP

/*
NOTES:
0. std::unordered_map is an associative container that contains key-value pairs with unique keys.
1. Search, insertion, and removal have average constant-time complexity.
2. Internally, the elements are organized into buckets.
3. It uses hashing to insert elements into buckets.
4. This allows fast access to individual elements, because after computing the hash of the value it refers to
   the exact bucket the element is placed into.

WHY UNORDERED_MAP
0. maintain a collection of uniqe {key:value} pairs with fast insertion and removal.
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    std::unordered_map< std::string,int> umap;
    umap["DEF"] = 10;
    umap["ABC"] = 20;
    umap["PQR"] = 40;
    umap["UVW"] = 30;
    umap.insert(std::make_pair("GHI", 6));


    //access
    cout << umap["DEF"] << endl;

    //update
    umap["UVW"] = 100;

    //iterate
    for (auto& it : umap) {
        std::cout << it.first << " " << it.second << std::endl;

    }

    //find
    auto posi = umap.find("PQR");
    if (posi != umap.end()) std::cout << "found at" << posi->first << "  " << posi->second;

    return 0;
}

