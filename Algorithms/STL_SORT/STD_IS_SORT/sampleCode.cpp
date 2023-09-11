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
	{
		std::vector<int> vec{4,3,5,2,6,1};
		
		std::sort(std::execution::par , vec.begin() , vec.end() , std::greater<int>());
		std::sort(std::execution::par , vec.begin() , vec.end() );
		for(auto& elm : vec)
			cout << elm << " ";

		cout << endl;
		cout << std::is_sorted(vec.begin() , vec.end()) << endl;
		cout << std::is_sorted(vec.begin() , vec.end(),std::greater<int>()) << endl;
		cout << endl<< endl;
	}
	// 2. Sortng user defined data types

	{
	std::vector<Point> vec{{1,2},{3,1},{0,1}};
	
	std::sort(vec.begin() , vec.end());
	//std::sort(vec.begin() , vec.end() , std::greater<Point>());
	//std::sort(std::execution::par , vec.begin() , vec.end());
	
	for(auto& elm : vec)
		cout << elm.x << " " << elm.y << endl;
	
		cout << endl;
		cout << std::is_sorted(vec.begin() , vec.end());
		cout << endl<< endl;
	}
		
	// 3. Sort using a function object
	// 4. Sort using lambda expression
	{
	std::vector<int> vec{4,3,5,2,6,1};
	
	std::sort(vec.begin() , vec.end());
	std::sort(vec.begin() , vec.end() , customLess);
	std::sort(vec.begin() , vec.end() , [](int a, int b){return a<b;});
	for(auto& elm : vec)
		cout << elm << " ";
	cout << endl;
	cout << std::is_sorted(vec.begin() , vec.end()) << endl;
	cout << std::is_sorted(vec.begin() , vec.end() , customLess);
	cout << std::is_sorted(vec.begin() , vec.end() , [](int a, int b){return a<b;});
	}
	
	
	

	return 0;
}
