//TOPIC STD::SET
//Syntax std::set<T> objectName
//NOTES:
// 	std::set is an associated container that contains a sorted set of unique objects of type key
// 	it is usually implemented using Red-Black Tree
//	Insertaion, Removal, Search have logirathmic complexity
//	If we want to store user defined data type in set then we will have to provide compare Function so that set can store them in sorted order
// we can pass the order of sorting while construction set object

//BUTTON LINE
// it store unique elements and they are stored in sorted order (A/D)


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
	
	set<int> Set = {1,2,3,4,5,6,7,8,1,2,3,4};
	for(const auto& e : Set)
	{
		cout << e << endl;
	}
	
	std::set<int , std::greater<int>> ascSet = {1,3,4,2,6}; //initialer list initiation
	std::set<int , std::less<int>> dscSet  {1,3,4,2,6}; // uniform initialization
	
	for(const auto& e : ascSet)
	{
		cout << e << endl;
	}
	
	for(const auto& e : dscSet)
	{
		cout << e << endl;
	}
	
	cout << "*************************** User defined set ********" << endl;
	
	set<Person , std::greater<Person>> userSet = {{30, "a"},{20,"bbbb"},{40, "ahjd"}};
	//set<Person , std::less<Person>> userSet = {{30, "a"},{20,"bbbb"},{40, "ahjd"}};
	for(const auto&e : userSet)
		cout << e.name << "," << e.age<< endl;
	
	
	return 0;
}
