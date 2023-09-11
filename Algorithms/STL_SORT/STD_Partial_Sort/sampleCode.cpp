//STL Algorithm is_sorted

//NOTES:
// 0. check if the elements in range[first,last] are sorted in non-descending order?

//Types
// 1. Sorting integral data types
// 2. Sortng user defined data types
// 3. Sort using a function object
// 4. Sort using lambda expression

#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>
using namespace std;


int main(){
	{
		std::vector<int> vec{5,7,4,2,8,6,1,9,0,3};
		
		//std::partial_sort( vec.begin() ,vec.begin()+4, vec.end() );
		//std::partial_sort( vec.begin() ,vec.begin()+4, vec.end() , std::greater<int>());
		//std::partial_sort( vec.begin() ,vec.end(), vec.end() );
		//std::partial_sort(std::execution::par, vec.begin() ,vec.end(), vec.end() );
		//std::partial_sort( vec.begin() ,vec.begin()+4, vec.end()-2 );
		std::partial_sort( vec.begin() ,vec.begin()+4, vec.begin()+4 );
		
		for(auto& elm : vec)
			cout << elm << " ";

		cout << endl<< endl;
		
	}
	

	return 0;
}
