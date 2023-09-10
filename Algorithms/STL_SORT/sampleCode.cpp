//STL Algorithm Sort

//NOTES:
// 0. in C++ STL we have sort function which can sort in increasing and decreasing order
// 1. Not only integral but user defined data can be sorted using this function.
// 2. Internaly it uses IntroSort which is combination of Quicksort, Heapsort and Insertionsort.
// 3. By default it uses Quicksort but if quicksort is doing unfair partionaning and taking more than N*logN time, it switches to Heapsort and when the array size becomes really small, it switches to Inserionsort.
// 4. We can use partial execution policy for better performance.

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
	
	std::sort(vec.begin() , vec.end());
	std::sort(vec.begin() , vec.end() , std::greater<>());
	std::sort(std::execution::par , vec.begin() , vec.end());
	std::sort(std::execution::par , vec.begin() , vec.end() , std::greater<int>());
	for(auto& elm : vec)
		cout << elm << " ";
	}
	cout << endl<< endl;
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
	{
	std::vector<int> vec{4,3,5,2,6,1};
	
	std::sort(vec.begin() , vec.end());
	std::sort(vec.begin() , vec.end() , customLess);
	std::sort(vec.begin() , vec.end() , [](int a, int b){return a<b;});
	for(auto& elm : vec)
		cout << elm << " ";
	}
	
	
	// 4. Sort using lambda expression

	return 0;
}
