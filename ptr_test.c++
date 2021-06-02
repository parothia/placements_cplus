#include<bits/stdc++.h>
using namespace std;

// int main() {
// 	int a=5,b=10,c=15;
// 	int *arr[]={&a,&b,&c};
// 	cout<<arr[1]<<endl;
// 	cout<<*arr[1]<<endl;
// 	return 0;
// } 

class Base {
public:
	Base() {
		cout<<"Base constr\n";
	}
	void fxn() {
		cout<<"Base fxn\n";
	}
	virtual ~Base() {
		cout<<"Base destructor\n";
	}
};
class Derived :public Base{
public:
	void fxn() {
		cout<<"Derived fxn\n";
	}
	Derived() {
		cout<<"derived constructor \n";
	}
	~Derived() {
		cout<<"Derived destructor\n";
	}
};

int main() {
	// Base *b=new Base();
	Base *d=new Derived();
	d->fxn();
	((Derived *)d)->fxn();
	delete(d);
	// delete(b);
	return 0;
}


