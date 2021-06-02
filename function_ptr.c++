#include<iostream>
using namespace std;
// mostly used in lambda fxn
void HelloWorld() {
	cout<<"Hell";
}

int main() {
	// HelloWorld(); --  calling function
	auto fxn=HelloWorld; //OR fxn=&HelloWorld; -- save fucntion to var;
	fxn(); //-- now we can call like this

	/*
	now what is auto type
	void(*fxn)(parameters) this is auto
	typedef void(*new_fxn)();
	new_fxn f=HelloWorld;
	f();
	*/

	return 0;
}

