// STL-Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
TOPIC: std::vector

SYNTAX: std::vector<type> vectorname;

NOTES:
1. std::vector is a sequence container and also known as Dynamic Array
2. Size can grow and shrink dynamically, and no need to provide size at time of compile

ELEMENT ACCESS
at(), [], front(), back(), data()

MODIFIERS:
insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;

void myFunc(std::vector<int>const &vec) {
    cout << "\n Size of vector is: "<< vec.size();
}

int main()
{
    std::vector<int> arr1;
    std::vector<int> arr2(5, 10); //(size,value)
    std::vector<int> arr3 = { 1,2,3,4,5 };
    std::vector<int> arr4{ 1,2,3,4,5 };

    arr3[3] = 10;
    arr3.at(3) = 10; //gives exception if out of bound

    auto top = arr3.front();

    arr3.insert(arr3.end(), 6);

    arr3.push_back(12);

    for (auto& it : arr3)
        cout << it << " ";

    myFunc(arr3);

    return 0;
}