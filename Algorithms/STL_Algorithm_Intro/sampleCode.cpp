//STL Algorithm Intro

//NOTES:
// 0. STL algorithms library defines functions for a variety of purposs (e.g. searching, sorting, counting , manipulating)
// 1. Algorithms are applied to range of elements
// 2. <algorithm> header is used to get all algorithms in STL

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	
	std::vector<int> vec{4,3,5,2,6,1};
	std::vector<int>::iterator it = std::find(vec.begin() , vec.end() , 12);
	//auto it = std::find(vec.begin() , vec.end() , 4);
	
	if(it == vec.end()){
		cout << "not found" << endl;
		}
	else{
		cout << "found" << endl;
	}
	
	
	return 0;
}
