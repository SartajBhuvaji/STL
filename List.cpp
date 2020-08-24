//TOPIC: list In STL
// DOUBLE LL
/*
1. This is double linked list what we know from C prgramming language.
2. List is sequence container that allow non - contiguous memory allocation. [3 type of containers(sequence, ordered, unordered)]
3. List is faster compared to other sequence containers(vector, forward_list, deque) in terms of
insertion, removaland moving elements in any position provided we have the iterator of the position.
4. We should use this class instead of traditional double linked list because
a.Well tested
b.Bunch of available function
5. Few Available Operations
operator =,  assign, front, back, empty, size, max_size, clear, insert, emplace, push_back, pop_back, push_front
pop_front, reverse, sort, merge, splice, unique, remove, remove_if, resize.
*/

#include<iostream>  
#include<list>  
using namespace std;

int main() {

	list<int> mylist1 = { 5,12,53,21,16 };
	list<int> mylist2 = { 7,6,12,10 };
	list<int> mylist3 ;

	mylist3 = mylist1;
	mylist1.front();

	cout << mylist1.size();
	mylist1.push_back(100);
	mylist1.push_front(-2);

	mylist2.sort();

	mylist3.merge(mylist2);
	return 0;
}