//TOPIC container inside container
#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	std::vector<std::vector<int>> Tree;
	int edge , n1 , n2;
	
	cout << "Enter number of Egde: " << endl;
	cin >> edge;
	Tree.resize(edge);
	
	for(int i =0; i < edge; ++i)
	{
		cout << "Enter N1 , N2: " << endl;
		cin >> n1 >> n2;
		cout << "n1: "<< n1  << "," << "n2: " << n2 << endl;
		
		Tree[n1].push_back(n2);
	}
	for(const auto& e1: Tree){
		for(const auto& e2:e1){
				cout << e2 ;
		}
	cout << endl;}
	
	return 0;
}