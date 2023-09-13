//STL Algorithm std::copy_backward 

//NOTES:
// 0. copy_backward :  it copies elements from the range, defined by [first , last) to anothe range ending at d last. the elements are copied in reverse order(the last element is sopied first)


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
	
	vector<int> to_vector(15);
	copy_backward(from_vector.begin() , from_vector.end() , to_vector.end()); //copy from 5-10, first copy 9 then 8 -> "0 0 0 0 0 0 1 2 3 4 5 6 7 8 9"
	
	print(to_vector);
	
	return 0;
}
