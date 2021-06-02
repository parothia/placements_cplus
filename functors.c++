 
#include<iostream>

using namespace std;
// Function wrapped in class so that available like an object
// performed using overload () braces;
// main function is used is to save the state of an object 
// like here 12 is saved where as m(2) works as function also but it is an object.

class Mul {
	int _val;
public:
	Mul(int val):_val{val} {};
	int operator () (int val) {
		return val*_val;
	}
};
int main() {
	Mul m(12);
	cout<<m(2)<<endl;
	cout<<m(3)<<endl;
	return 0;
}