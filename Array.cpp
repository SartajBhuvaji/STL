// std::array
//SYNTAX: srd::array<T, N> array;

/*
NOTICE:
1. std::array is a container that encapsulates fixed size arrays.
2. array size is needed at compile time.
3. Assign by value is actually by value.
4. Access Elements:
   a. at()
   b. []
   c. front()
   d. back()
   e. data() // gives access to the underlying array
*/

#include <iostream>
#include <array>
#include <algorithm>
using std::cout;
using std::cin;

void myFunc(std::array<int, 5> const& p) {
    cout << "\narray contains " << p.size() << " elements";
}

int main(){
    std::array<int, 5> myarray;
    myarray.fill(INT_MAX); //Fill complete array
   
    myarray = { 100,41,55,7,9 };
    std::sort(myarray.begin(), myarray.end()); //Sort array
   
    myarray.at(3) = 2; //.at() throws out of bound exception
    
    for (auto& var : myarray) {
        cout << var << " ";
    }
    myFunc(myarray);
}