//STL Algorithm std::copy and std::copy_if

//NOTES:
// 0. copy :    Copies the elements in the range, defined by [first, last), to anothe range beginning at d_first
// 1. copy_if : only copies if predicate returns true
// 2. if sourse and destination range are overlapping the the behavior is undefined

#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
#include <algorithm>
using namespace std;

void print( vector<int>& vec)
{
	std::copy( vec.begin() , vec.end() , ostream_iterator<int>(cout , " "));
	cout << endl;
}
int main(){
	
	vector<int> from_vector(10);
	
	iota(from_vector.begin(),
		 from_vector.end(),
		 0);
	
	vector<int> to_vector(from_vector.size());
	//copy(from_vector.begin() , from_vector.end() , to_vector.begin());
	to_vector = from_vector;
	print(to_vector);
	
	//Or alteratively
	vector<int> to_vector2;
	copy(from_vector.begin() , from_vector.end() , back_inserter(to_vector2));
	print(to_vector2);
	
	vector<int> to_vector3;;
	cout << "odd number in a vector are: "<< endl ;
	copy_if(from_vector.begin() , from_vector.end(), back_inserter(to_vector3) , [](int x){ return (x&1);});
	print(to_vector3);
	
	to_vector3.clear();
	cout << "even number in a vector are: "<< endl ;
	copy_if(from_vector.begin() , from_vector.end(), back_inserter(to_vector3) , [](int x){ return !(x&1);});
	print(to_vector3);
	return 0;
}
