//TOPIC Std::unordered_multiset in C++ STL
//Syntax std::unordered_multiset<T1> objName

//notes
//1. std::unordered_multiset is an associative container that contains set of possible non-unique objects
//2. search, insertion and removal have average constant time complesity
//3. internaly the elements are orgenized into buckets
//4. it uses hashing to insert elements into buckets
//5. this allow fast access to individual element, beacuse after computing the hash value, it refers to the bucket that element is placed into.

// why std::unordered_multiset
// maintain a collection of non-unique with fast insertion and removal

#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
	
	{
		std::unordered_multiset<int> s1 = {4,1,2,3,9,4,3,2,9,8,10};
		auto search = s1.find(2);
		if(search != s1.end())
			cout << "2 found" << endl;
		else
			cout << "2 not found" << endl;
		s1.insert(12);
		s1.erase(12);
		for(auto& elm : s1)
			cout << elm << " " << endl;
	}
	
	
	return 0;
}
