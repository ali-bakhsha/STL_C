//TOPIC STD::MULTISET
//Syntax std::multiset<T> objectName
//NOTES:
// 	std::multiset is an associated container that contains a sorted set of type key
// 	it is usually implemented using Red-Black Tree
//	Insertaion, Removal, Search have logirathmic complexity
//	If we want to store user defined data type in multiset then we will have to provide compare Function so that multiset can store them in sorted order
// we can pass the order of sorting while construction multiset object

//BUTTON LINE
// It is similar to set except it can have multiple elements with same value


#include <iostream>
#include <set>
#include <string>
#include <functional>

using namespace std;

class Person{
	public:
	float age;
	string name;
	bool operator < ( const Person& rhs) const { return age < rhs.age;} // default
	bool operator > ( const Person& rhs) const { return age > rhs.age;}
};
int main(){
	
	multiset<int> mSet = {1,2,3,4,5,6,7,8,1,2,3,4};
	for(const auto& e : mSet)
	{
		cout << e << endl;
	}
	cout <<endl << "*************************" << endl;
	std::multiset<int , std::greater<int>> ascmSet = {1,3,1,2,4,2,6}; //initialer list initiation
	std::multiset<int , std::less<int>> dscmSet  {1,3,4,1,2,6}; // uniform initialization
	
	for(const auto& e : ascmSet)
	{
		cout << e << endl;
	}
	cout <<endl << "*************************" << endl;
	
	for(const auto& e : dscmSet)
	{
		cout << e << endl;
	}
	
	cout << "*************************** User defined multiset ********" << endl;
	
	multiset<Person , std::greater<Person>> usermSet = {{30, "a"},{20,"bbbb"},{40, "ahjd"}};
	//set<Person , std::less<Person>> userSet = {{30, "a"},{20,"bbbb"},{40, "ahjd"}};
	for(const auto&e : usermSet)
		cout << e.name << "," << e.age<< endl;
	
	cout <<endl << "*************************" << endl;
	return 0;
}
