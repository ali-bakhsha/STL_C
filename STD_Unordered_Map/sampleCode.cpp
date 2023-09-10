//TOPIC Std::unordered_map in C++ STL
//Syntax std::unordered_map<T1,T2> objName

//notes
//1. std::unordered_map is an associative container that contains key-value pairs with unique keys.
//2. search, insertion and removal have average constant time complesity
//3. internaly the elements are orgenized into buckets
//4. it uses hashing to insert elements into buckets
//5. this allow fast access to individual element, since once a hash in computed, it refers to the bucket that element is placed into.

// why std::unordered_map
// maintain a collection of unique(key:value) pairs with fast insertion and removal

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
	
	{
		std::unordered_map<int , char> umap = { {1,'a'}, {4,'d'} , {2,'b'}};
		
		umap.insert(std::make_pair(11,'z'));
		cout << umap[1] << endl;
		cout << umap[2] << endl;
		
		// update
		umap[1] = 'c';
		
		// interator
		for(auto& elm : umap)
			cout << elm.first << " " << elm.second <<  endl;
	}
	
	
	return 0;
}
