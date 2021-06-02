#include<iostream>
using namespace std;

class B {
	int x;
public:
	void print()  {
		cout<<x<<endl;
	}
};

int main() {
	B b=5;
	b.print();
	return 0;
}
