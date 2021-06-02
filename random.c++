#include<bits/stdc++.h>
using namespace std;

class Base {
	int x;
	void operator new(size_t size) {}
public:
	Base() {
		cout<<"constructor called ";
	}
	void get();
};

void Base::get() {
	cout<<"In Base class";
}

int main() {
	Base *b=new Base();
	delete(b);
	return 0;
}

