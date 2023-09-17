//STD_TUPLE is a template class of many data types that you want
// it is appeared from c++ 11
// we can use it for multiple return values from a function

#include <iostream>
#include <tuple>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	std::tuple<int , string , char> t {1 , "Test" , 'a'};
	t = make_tuple(2, "MyTest", 'b');
	
	cout << get<0>(t) << endl;
	cout << get<1>(t) << endl;
	cout << get<2>(t) << endl;
	
	return 0;
}