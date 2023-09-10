//TOPIC Forward list in C++

//1. This is Single lined list what we know from C programming language. 
//2. Whay forward list why not single linked list.
//3. We should use this class instead of traditional single linked list beacuse:
//	a. Well Tested.
//	b. Bunch of available functions
//4. few available functions
//	operator=, aggign, front, empty, max_sze , clear, insert_after, emplace_after, reverse, sort, merge, splice_after, unique, remove, remove_if , resize

#include <iostream>
#include <forward_list>

using namespace std;

int main(){
	
	forward_list<int> list1 = {2,5,5,4,6,2,2};
	forward_list<int> list2 = {7,6,1,9};
	
	list1.insert_after(list1.begin() , 8);
	list1.emplace_after(list1.begin() , 8);
	
	//list1.reverse();
	
	//list1.merge(list2);
	//list1.splice_after(list1.begin() , list2);
	
	//list1.remove(2);
	//list1.remove_if( [] (int n){ return n>4;});
	
	//list1.unique();
	//list1.resize(2);
	list1.resize(12);
	cout << endl;
	cout << "List1 size: " << std::distance(list1.begin() , list1.end()) << endl;
	cout << "List2 size: " << std::distance(list2.begin() , list2.end()) << endl;
	cout << endl;
	cout << "Display list1: " << endl;
	for( auto& el : list1)
		cout << el << " ";
	
	cout << endl;
	cout << "Display list2: " << endl;
	for( auto& el : list2)
		cout << el << " ";
	return 0;
}
