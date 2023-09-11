//STL Algorithm std::iota

//NOTES:
// 0. fills the range [first,last) with sequential increasing values
//    starting with value and repeatively evaluating ++value

#include <iostream>
#include <vector>
#include <list>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){
	
	std::list<int> list(10);
	std::iota(list.begin(), list.end() , -4);
	
	for(auto& elm : list)
		cout << elm << " " ;
	cout << endl<< endl;
	
	std::vector<std::list<int>::iterator> vec(list.size());
	std::iota(vec.begin() , vec.end() , list.begin());
	
	for(auto elm : vec)
		cout << *elm << " " ;
	cout << endl<< endl;
	
	return 0;
}
