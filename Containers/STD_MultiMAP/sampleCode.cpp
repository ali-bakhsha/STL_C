//TOPIC STD::Multipap
//Syntax std::multimap<T1,T2> objectName where T1 is key type and T2 is value type
//NOTES:
// 	std::multimap is an associated container that contains sorted list of key value pairs while permitting multiple values with the same key.
// it stores key value pair in sorted order on the basis of key(assending/decending)
// data structure in multimao is not defined by standard. but red-black tree is assumed by most of people
// lookup: count, find, contains, equal range, lower boaund , upper bound
// we dont have at() of [] functions to get elements like we had in std::map


#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <functional>

using namespace std;


int main(){
	
	std::multimap<char , int , std::greater<char>> multiMap;
	multiMap.insert(std::pair<char , int>('a' , 1));
	multiMap.insert(std::make_pair('a' , 1));
	multiMap.insert(std::make_pair('a' , 3));
	multiMap.insert(std::make_pair('b' , 4));
	multiMap.insert(std::make_pair('b' , 5));
	multiMap.insert(std::make_pair('c' , 6));
	multiMap.insert(std::make_pair('d' , 7));
	
	

	//display
	for(const auto& el: multiMap)
	{
		cout << el.first << ","<< el.second << endl;
	}
	cout << "******************* get all the pairs with given key ********"<< endl;
	
	std::pair< std::multimap<char , int>::iterator , std::multimap<char , int>::iterator > range = multiMap.equal_range('a');
	//auto range = multiMap.equal_range('a');
	for(auto it = range.first; it != range.second; ++it)		
		cout << it->first << "," << it->second << endl;
	
	
	cout << "******************* get count of pairs with same key ********"<< endl;
	cout <<"Count of a: " << multiMap.count('a') << endl ; 	
	cout <<"Count of b: " << multiMap.count('b') << endl; 	
	cout <<"Count of c: " << multiMap.count('c') << endl; 	
	cout <<"Count of d: " << multiMap.count('d') << endl; 	
	cout <<"Count of e: " << multiMap.count('e') << endl; 	
	cout <<"Count of f: " << multiMap.count('f') << endl; 	
	
	cout << "******************* contains function check if key is avaialle or not available TRUE,FALSE ********"<< endl;
	cout << "Multimap contains a : " << multiMap.contains('a') << endl; 
	cout << "Multimap contains b : " << multiMap.contains('b') << endl; 
	cout << "Multimap contains c : " << multiMap.contains('c') << endl; 
	cout << "Multimap contains d : " << multiMap.contains('d') << endl; 
	cout << "Multimap contains e : " << multiMap.contains('e') << endl; 
	cout << "Multimap contains f : " << multiMap.contains('f') << endl;


	cout << "******************* find function return the first pair can be match to key otherwise return null ********"<< endl;
	auto pair = multiMap.find('a');
	cout << "Multimap find a : " << pair->first << "," << pair->second<< endl;
	pair = multiMap.find('f');
	cout << "Multimap find f : " << pair->first << "," << pair->second<< endl;
	
	cout << "******************* lower_bound and upperbound functions ********"<< endl;
	pair = multiMap.lower_bound('a');
	cout << "Multimap lower_bound a : " << pair->first << "," << pair->second<< endl;
	pair = multiMap.upper_bound('a');
	cout << "Multimap upper_bound a : " << pair->first << "," << pair->second<< endl;
	cout << endl;
	pair = multiMap.lower_bound('b');
	cout << "Multimap lower_bound b : " << pair->first << "," << pair->second<< endl;
	pair = multiMap.upper_bound('b');
	cout << "Multimap upper_bound b : " << pair->first << "," << pair->second<< endl;
	

	
	return 0;
}
