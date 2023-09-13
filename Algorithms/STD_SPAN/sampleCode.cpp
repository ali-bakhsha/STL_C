//STL Algorithm std::iota

//NOTES:
// 0. fills the range [first,last) with sequential increasing values
//    starting with value and repeatively evaluating ++value

#include <iostream>
#include <vector>
#include <array>
#include <span>
using namespace std;
void print_container( std::span<int> conte)
{
	// called by refrence
	
	for( const auto& elm : conte)
		std::cout << elm << endl;
	//
}
int main(){
	
	// traditional
	int a[] {1,3,5,7,9}; // c-typ array
	print_container(a);
	cout << endl<< endl;
		print_container(a);

	
	cout << endl<< endl;
	
	std::vector v{2,4,6,8,10};
	print_container(v);
	
	cout << endl<< endl;
	std::array a2 = {0,10,20,30,40,50,};
	print_container(a2);
	return 0;
}
