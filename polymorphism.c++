#include<bits/stdc++.h>
using namespace std;

class Base{
public:
	void fxn() {
		cout<<"Base fxn\n";
	}
};
class Derived:public Base {
	public:
	virtual void fxn() {
		cout<<"Derived fxn\n";
	}
};
class DDerived:public Derived {
	void fxn() {
		cout<<"DDerived fxn\n";
	}
};

int main() {
	Base *p=new Derived();
	Derived *d=new DDerived();
	Base *p1=new DDerived();
	p->fxn();
	d->fxn();
	p1->fxn();
	return 5;
}

