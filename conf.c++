#include<bits/stdc++.h>
using namespace std;
class Base {
	public:int a;
public:
	Base() {
		a=10;
	}
};
class  B1:public Base {
};
class B2:public Base {};
class Derived:public B1,public B2 {

};
int main() {
	cout<<sizeof(Derived);
	Derived d;
	d.a=5;
	return 0;
}
