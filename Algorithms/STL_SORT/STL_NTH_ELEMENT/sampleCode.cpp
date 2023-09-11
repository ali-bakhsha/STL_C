//STL Algorithm std::nth_element

//NOTES:
// 0. nth_element is a partial sorting that rearanges elements in [first , last) such that:
//	a. the element at the nth position is the one with should be at that position if we sort the list.	
//  b. it does not sort the list, just that all the elements whick presede the nth element are not grather than it.

// 1. nth_element algorithm is implemented using introselect:
//	a. introselect is a hybrid of quickselect and median of medians algorithm.
//	b.median of medians is a median selection algorithm for better pivot selection maily used in quickselect.

//Types
// 1. Sorting integral data types
// 2. Sortng user defined data types
// 3. Sort using a function object
// 4. Sort using lambda expression

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class Point{
	public:
	int x, y;
	
	Point(int x , int y):x(x) , y(y){}
	bool operator <(const Point& p1){ return (x+y) < (p1.x+p1.y);}
	bool operator >(const Point& p1){ return (x+y) > (p1.x+p1.y);}
};

struct{
	bool operator()(int a , int b) const
	{
		return a < b;
	}
}customLess;
int main(){
	
		std::vector<int> v{1,1,4,8,9,6,7,9,3};
	{	
		for(auto& elm : v)
			cout << elm << " ";
		cout << endl << endl;
		cout << "The median is: " <<v[ v.size()/2] << endl;
		std::nth_element(v.begin() , v.begin()+4 , v.end());
		cout << "The median is: " <<v[ 4] << endl;
		for(auto& elm : v)
			cout << elm << " ";
	}
	{
		cout << endl<< endl;
		
		std::nth_element(v.begin() , v.begin()+1 , v.end());
		
		for(auto& elm : v)
			cout << elm << " ";
	}
	cout << endl<< endl;
/*
	// 2. Sortng user defined data types

	{
	std::vector<Point> vec{{1,2},{3,1},{0,1}};
	
	std::sort(vec.begin() , vec.end());
	//std::sort(vec.begin() , vec.end() , std::greater<Point>());
	//std::sort(std::execution::par , vec.begin() , vec.end());
	//std::sort(std::execution::par , vec.begin() , vec.end() , std::greater<Point>());
	for(auto& elm : vec)
		cout << elm.x << " " << elm.y << endl;
	}
		cout << endl<< endl;
		
	// 3. Sort using a function object
	// 4. Sort using lambda expression
	{
	std::vector<int> vec{4,3,5,2,6,1};
	
	std::sort(vec.begin() , vec.end());
	std::sort(vec.begin() , vec.end() , customLess);
	std::sort(vec.begin() , vec.end() , [](int a, int b){return a<b;});
	for(auto& elm : vec)
		cout << elm << " ";
	}
	
	
	*/

	return 0;
}
