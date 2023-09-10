//TOPIC Std::unordered_multimap in C++ STL
//Syntax std::unordered_multimap<T1,T2> objName

//notes
//1. std::unordered_multimap is an associative container that supports equvalent keys( an unordered_multimap may contain multiple copies of each key value) and that associats values of anothe type with the keys..
//2. search, insertion and removal have average constant time complesity
//3. internaly the elements are orgenized into buckets
//4. it uses hashing to insert elements into buckets
//5. this allow fast access to individual element, since once a hash in computed, it refers to the bucket that element is placed into.

// why std::unordered_map
// maintain a collection of non-unique(key:value) pairs with fast insertion and removal

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
	
	{
		std::unordered_multimap<int , char> umap = { {1,'y'}};
		umap.insert({5,'d'});
		umap.insert( std::pair<int , char> (2,'b'));
		umap.insert(std::make_pair(3,'c'));
		// interator
		for(auto& elm : umap)
			cout << elm.first << " " << elm.second <<  endl;
	}
	
	
	return 0;
}
