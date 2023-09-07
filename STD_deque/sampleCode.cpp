//TOPIC Std::deque in C++ STL (double ended queue)
//Syntax std::deque<T1> objName

//notes
//1. std::deque is an indexed sequence container
//2. It allows fast insersion at beginning and end.
//3. it uses ubdividual allocated fixed size array, with additional bookkeeping, meaning index based access to deque must perform two pointers derefrence, but in vector we get in one derefrence.
//4. unlike vector elements of deque are not stored contiguous
//5. the storage of deque are automatically expaded and contracted as need.
//6. expension of deque is cheeper than expension of vector
//7. a degue holding just one element has to allocate its full internal array. (e.g 8 times the object size on 64 bit lib stdc++, 16 times the object size or 4096 bytes whichever is larger on an 64-bit libc++)

//Time complexity
//random access - constant o(1)
//insertion of removal of elemnts at the end or beginning - constant o(1)
//insertion or removal of elements - liner o(n)
#include <iostream>
#include <deque>

using namespace std;

void print( std::deque<int>& obj){ 
	for( auto& elm : obj) 
		cout << elm << " " ;
	cout << endl;
}
int main(){
	
	{
		std::deque<int> q1 = {2,3,4};
		q1.push_back(5);
		q1.push_front(1);
		print(q1);
	}
	
	{
		std::deque<int> q1 = {2,3,4};
		q1.pop_back();
		q1.pop_front();
		print(q1);
	}
	return 0;
}
