//TOPIC Std::list in C++ STL

//1. This is double lined list what we know from C programming language. 
//2. List is a sequence container that allow non-contiguos memory allocation.
//3. List is faster compaed to other sequence containers (Vector , forward_list, deque) in term of insertion, removal and moving elements in any position provided we have the iterator of the position 
//3. We should use this class instead of traditional double linked list beacuse:
//	a. Well Tested.
//	b. Bunch of available functions
//4. few available functions
//	operator=, aggign, front, back, empty, size,  max_sze , clear, insert, emplace, push_back, pop_back, push_front, pop_front,  reverse, sort, merge, splice, unique, remove, remove_if , resize

#include <iostream>
#include <list>

using namespace std;

int main(){
	
	std::list<int> list1 = {2,5,5,4,6,2,2 , 10};
	std::list<int> list2 = {7,6,1,9};
	//list1 = list2;
	cout << " list1.front: "<<list1.front() << endl;
	cout << " list1.back: "<<list1.back() << endl;
	
	///list1.sort()
	//list1.merge(list2);
	//list1.insert(list1.begin() , 8);
	//list1.emplace(list1.begin() , 8);
	
	//list1.reverse();
	
	//list1.merge(list2);
	list1.splice(list1.begin()+1 , list2);
	
	//list1.remove(2);
	//list1.remove_if( [] (int n){ return n>4;});
	
	//list1.unique();
	//list1.resize(2);
	//list1.resize(12);
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
