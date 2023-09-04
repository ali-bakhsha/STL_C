//TOPIC std::vector

//NOTES:
// std::vector is a sequence and also known as dynamic array or array list
// its size can grow and shrink dynamically, and no need to provide size at compile time

//Elements access
// at() , [] , front() , back() , data()

//Modifiers
// insert() , emplace() , push_back() , emplace_back() , pop_back() , resize() , swap() , erase() , clear()

// Array provides Fast access and linked list provides dynamic add/remove -> vector provides both of them

//push_back add twice space
//iniliaize size is depends on compiler for example 3
//when add forth size will be set to 6
#include <iostream>
#include <vector>

using namespace std;
int main(){
	
	//declaration
	std::vector<int> arr1;
	std::vector<int> arr2(5,50);
	std::vector<int> arr3 = {1,2,3,4}; // initializer list
	std::vector<int> arr4 {1,2,3,4}; // uniform initialization
	
	//accessing elements
	arr2[0] = 10;
	arr2.at(3) = 10;
	
	// front() return the first ellement in the vector
	cout << arr3.front() << endl;
	
	//back() return the last item in the vector
	cout << arr3.back() << endl;
	
	//data() return the pointer of data array in vector
	auto data = arr3.data();
	cout << data[0] << "," << data[1] << endl;

	arr3.push_back(5);
	arr3.pop_back();
	
	cout << arr3.back() << endl;
	// diff between capacity and size
	
	// emplace_back vs push_back
	
	//Peroblem in Vector?
	//optimized way to use vector
	vector<int> vec;
	// to make best performance
	vec.reserve(1000);

	for(int i=0; i < 1001; i++){
		vec.push_back(1);
		cout << "Size: " <<vec.size() << "\t\t" << "Capacity: " <<vec.capacity() << endl;
	}
		return 0;
}
