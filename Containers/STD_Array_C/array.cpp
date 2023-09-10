//std::array

// syntax std::array<T , N> array

//Notice
//1. std::array is a container that encapsulates fixed size array
//2. arraysize is needed at compile time
//3. assign by value is actually by value
//4. access elements:
//		a. at()
//		b. []
//		c. front()
//		d. back()
//		e. data() // gives accessto the underlying array
// fill(a number for all elements)

#include <iostream>
#include <array>
using namespace std;

int main(){
	
	// Declare
	std::array<int , 5> myarray;
	
	//initializiation
	std::array<int,5> myarray1 = {1,2,3,4,5};
	std::array<int,5> myarray2 {1,2,3,4,5};
	
	std::array<int,5> myarray3;
	
	myarray3 = {1,2,3,4,5};
	myarray3.fill(100);
	cout << myarray3[0] << "," <<myarray3[1] << "," <<myarray3[2];
	
	
	return 0;
}
