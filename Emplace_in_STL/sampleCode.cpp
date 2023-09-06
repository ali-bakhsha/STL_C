//TOPIC Emplace in STL

//1. all the containers support insert and emplace operator to store data. 
//2. emplace is used to construct object in-place and avoids unnessessary copy of object
//3. insert and emplace are equal for primitive data types, but when we deal with heavy objects we should use emplace for efficiancy. 

#include <iostream>
#include <set>
#include <string>
#include <functional>

using namespace std;

class A{
	public:
		int x;
		A(int x = 0):x(x){cout << "Constructor" << endl;}
		A(const A& other):x(other.x){cout << "Copy Constructor" << endl;}
};
bool operator<(const A& lhs, const A& rhs){return lhs.x < rhs.x;}

int main(){
	
	std::set<A> mySet;
	cout << "When we use Insert: " << endl;
	mySet.insert(A(10));
	
	cout << endl<< endl;
	
	cout << "When we use Emplace by Object: " << endl;
	mySet.emplace(A(20));
	
	cout << endl<< endl;
	
	cout << "When we use Emplace by Data: " << endl;
	mySet.emplace(30);
	
	cout << endl<< endl;
	
	cout << "Display set..." << endl;
	for( auto& el: mySet)
		cout << el.x << endl;
	return 0;
}
