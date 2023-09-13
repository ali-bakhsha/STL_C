//STL Algorithm Binary_seacrch
//std::binary_search(begin, end , value)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	std::vector<int> vec{1,3,4,5,9};
	std::vector<int> element{1,2,3};
	
	for(const auto &e: element){
		cout << "Searching for: " << e << "--> ";
		if( std::binary_search(vec.begin() , vec.end() , e))
			cout << "Found" << endl;
		else
			cout << "not Found" << endl;
	}
	

	return 0;
}
