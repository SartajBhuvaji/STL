//STD : PAIR

//SYNTAX : 
// std::pair<T1,T2> obj;

/*
0. std::pair is a struct template that provides a way to store two heterogeneous objects as a single unit.
1. map, multimap, unorder_map, unorder_multimap can use pair to insert data into their structures.
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;


void print(std::pair<int, int>& obj) {
	cout << obj.first << " " << obj.second << std::endl;
}

int main() {

	std::pair<int, int> obj(10, 12);
	print(obj);

	std::pair<int, int> obj = std::make_pair(100, 200);
	print(obj);

	std::vector<std::pair<std::string, int>> list;

	list.push_back(std::make_pair("ABC", 12));
	list.push_back({ "DEF", 30 });

	for(auto& it : list) {
		cout << it.first << " " << it.second << std::endl;
	}
	return 0;
}