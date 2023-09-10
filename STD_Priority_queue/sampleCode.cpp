//TOPIC Std::priority_queue in C++ STL 
//Syntax std::priority_queue<T1> objName

//notes
//1. std::priority_queue class is a container adapter that provides constant time lookup of the largest or smallest element.
//2. by default std::vector is the container used inside
//3. cost of insetion and extraction is logarithmic
//4. std::priority_queue is implemented using std::make_heap , std::push_heap , std::pop_heap functions


#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

template <typename T>
void print( T &obj){ 
	while( !obj.empty())
	{		
		std::cout << obj.top()  << " " ;
		obj.pop();
	}
	std::cout << endl;
}
int main(){
	
	{
		std::priority_queue<int> q1;
		for(int elem : {1,8,2,9,3,7,5,6})
			q1.push(elem);
		print(q1);
		
	}
	{
		std::priority_queue<int , std::deque<int> , std::greater<>> q2;
		for(int elem : {1,8,2,9,3,7,5,6})
			q2.push(elem);
		print(q2);
		
	}
	{
		//using lambda to compare elements
		auto cmp = [](int left , int right) { return (left) < (right);};
		std::priority_queue<int , std::vector<int> , decltype(cmp)> q3(cmp);
		for(int elem : {1,8,2,9,3,7,5,6})
			q3.push(elem);
		print(q3);
		
	}
	
	return 0;
}
