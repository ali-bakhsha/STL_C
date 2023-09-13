//STL Algorithm std::copy_n 

//NOTES:
// 0. copy_n :    it is used to copy given number of elements from source to destination

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
	
	//vector<int> to_vector;
	//copy_n(from_vector.begin() , 4 , back_inserter(to_vector)); //copy 4 elemetns  -> 0 1 2 3 
	vector<int> to_vector(10);
	copy_n(from_vector.begin() , 4 , to_vector.begin()); //copy 4 elemetns -> 0 1 2 3 0 0 0 0 0 0 
	
	print(to_vector);
	
	return 0;
}
