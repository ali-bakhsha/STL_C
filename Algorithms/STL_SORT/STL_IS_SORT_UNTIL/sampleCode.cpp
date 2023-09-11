//STL Algorithm std::is_sorted_until

//NOTES:
// 0. finds how many elements are sorted in given range [first , last)

//Types
// 1. Sorting integral data types
// 2. Sortng user defined data types
// 3. Sort using a function object
// 4. Sort using lambda expression

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
		std::vector<int> v{4,3,2,1,7,8,1};
		
		for(auto& elm : v)
			cout << elm << " ";
		cout << endl << endl;
		
		auto it = std::is_sorted_until(v.begin() , v.end() , std::greater<int>());
		auto diff = std::distance(v.begin(), it);
		cout <<"it: " << *it <<" diff: " << diff<<  endl;
		
	cout << endl<< endl;

	return 0;
}
