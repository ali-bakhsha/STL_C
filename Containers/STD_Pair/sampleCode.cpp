//TOPIC Std::pair in C++ STL
//Syntax std::pair<T1,T2> objName

// 1. std::pair is a struct template that provides a way to store two heterogenous objects as a single unit.
// 2. map, multimap, unorder_map, unorder_multimap can use pair to insert data into their structures.

#include <iostream>
#include <vector>

using namespace std;
void print( std::pair<int , int>& obj){cout << obj.first << " " << obj.second << endl;}
int main(){
	
	{
		std::pair<int , int> obj(10, 20);
		print(obj);
	}
	
	{
		std::pair<int,int> obj = std::make_pair(10 , 20);
		print(obj);
	}
	
	{
		std::vector< std::pair<std::string , int> > lst;
		lst.push_back( std::make_pair("AAAA" , 30));
		lst.push_back( std::make_pair("BBBB" , 40));
		
		lst.push_back( std::pair<std::string , int>("CCCC" , 50));
		lst.push_back( std::pair("DDDD" , 60));  //c++ >=17
		
		// display the list
		for(auto& elm : lst){
			cout << elm.first << " , " << elm.second << endl;
		}
	}
	return 0;
}
