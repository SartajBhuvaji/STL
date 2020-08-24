//TOPIC: forward_list In STL
// SINGLY LL
/*
1. This is single linked list what we know from C programming language.
2. forward_list is single_list
3. We should use this class instead of traditional single linked list because
   a. Well tested
   b. Bunch of available function
4. Few Available Operations
   operator =, assign, front, empty, max_size, clear, insert_after, emplace_after, reverse, sort, merge
   splice_after, unique, remove, remove_if, resize\

   */


#include <forward_list> 
#include <iostream> 
using namespace std;

int main()
{
    forward_list<int> list1 = { 5,4,1,10 };
    forward_list<int> list2 = { 7,6,4,12,18 };
    list1.insert_after(list1.begin(), 100);


    for (auto& it : list1) {
        cout << it << " ";
    }

    list1.reverse();
    list1.sort();

    list1.merge(list2);

    list1.splice_after(list1.begin(), list2); //splice_after // remove data from 1 list and put in another

    cout << std::distance(list2.begin(), list2.end()); // gives size of list

    list1.remove(2);

    list1.remove_if([](int n) { //lambda function
        return n > 4;
        });

    list1.resize(2); //keeps only 2 elements if size < argument
    list1.resize(10); // adds 0 after size till 10th position
    return 0;
}