//TOPIC STD::MAP
//Syntax std::map<T1,T2> objectName where T1 is key type and T2 is value type
//NOTES:
// 	std::set is an associated container that store slements in key value combination where key should be unique otherwise it ovelewrides the previos value
// it is implemented using self-balance binary search Tree (AVL/Red-Black Tree)
// It store key value pair in stored order on the basis of key (assending / decending)
//It generally used in Dictionary type problems.



#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <functional>

using namespace std;


int main(){
	
	std::map<string , int> map;
	map["a"] = 909000;
	map["b"] = 1220;
	map.insert(std::make_pair("c" , 123)); 
	
	
	
	std::map<string , std::vector<int>> map2;
	map2["a"].push_back(222);
	map2["b"].push_back(333);

	//display
	for(const auto& el1: map)
	{
		cout << el1.first << ","<< el1.second << endl;
	}
	
	cout << endl;
	cout << endl;
	//display
	for(const auto& el1: map2)
	{
		cout << el1.first << endl;
		for(const auto& el : el1.second)
			cout << el << endl;
		std::cout << endl;
	}
	return 0;
}
