//TOPIC Std::deque in C++ STL 
//Syntax std::stack<T1> objName

//notes
//1. std::stack is acontainer adaptor that gives the programmer the functionality of a stack
//2. internaly it uses std::degue stl container
//3. it is LIFO data structure
//4. std::stack allows to push(insert) and pop(remove) only from back

//Functions and Time complexity
//empty() returns whethe the stack is empty. time complexity o(1)
//size() returns the size of the stack. time complexity o(1)
//top() returns a refrence to the top most element of the stack. time complexity o(1)
// push(g) adds the element g at the top of the stack.time complexity o(1)
//pop() deletes top most element of stack.time complexity o(1)
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void print( std::stack<int> obj){ 
	while(!obj.empty()){ 
		cout << obj.top() << " " ;
		obj.pop();
	}
	cout << endl;
}
void print( std::queue<int> obj){ 
	while(!obj.empty()){
		cout << obj.front() << " " ;
		obj.pop();
	}
	cout << endl;
}
int main(){
	
	{ // LIFO
		std::stack<int> stk;
		stk.push(3);
		stk.push(4);
		stk.push(5);
		stk.push(1);
		print(stk);
	}
	{//FIFO
		std::queue<int> queue;
		queue.push(3);
		queue.push(4);
		queue.push(5);
		queue.push(1);
		print(queue);
	}
	
	return 0;
}
