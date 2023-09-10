//TOPIC Std::queue in C++ STL 
//Syntax std::queue<T1> objName

//notes
//1. std::queue class is a container adapter that gives the programmer the functionality of a quque
//2. queue is a FIFO data structure
//3. queue provides only specific functions 
//4. std::queue allows to push(insert) at back and pop(remove) from front.
//5. std::queue provides front, back, push, pop , size , empty functions.

#include <iostream>
#include <queue>

using namespace std;

void print( std::queue<int> obj){ // call by value . if we set call by refrence &obj. data will be lost by pop 
	while( !obj.empty())
	{		
		std::cout << obj.front()  << " " ;
		obj.pop();
	}
	std::cout << endl;
}
int main(){
	
	{
		std::queue<int> q1;// = {2,3,4};
		q1.push(5);
		q1.push(2);
		q1.push(10);
		
		print(q1);
		std::cout << "again: " << endl;
		print(q1);
	
	}
	std::cout << "Exit: " << endl;
	
	return 0;
}
