//TOPIC: std::multiset
/*
NOTES:
1. std::multiset is an Associative Container that contains a sorted set of duplicate objects of type Key.
2. It is usually implemented using Red-Black Tree.
3. Insertion, Removal, Search have logarithmic complexity.
4. If we want to store user defined data type in multiset then we will have to provide
   compare function so that multiset can store them in sorted order.
5. We can pass the order of sorting while constructing set object.

BOTTOM LINE:
multiset is similar to set except it can have multiple elements with same value.
*/

#include <iostream>
#include <set>
#include <string>
using std::cin;
using std::cout;

class Person {
public:
	int age;
	std::string name;

	bool operator < (const Person& rhs) const { return age < rhs.age; }
};

int main() {

	std::multiset<int> myset = { 5,3,1,2,2,10,12 };

	for (auto& it : myset) {
		cout << it << " ";
	}
	cout << std::endl;
	std::multiset<Person> p = { {21 ,"Sartaj"}, {19, "Sameer" },{19, "Sameer" } };
	for (auto& it : p) {
		cout << it.name << " " << it.age << std::endl;
	}

	return 0;
}