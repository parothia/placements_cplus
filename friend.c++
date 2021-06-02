#include<bits/stdc++.h>
///////////////////////////////////////////
//FRIEND FUNCTION DEFINED OUTSIDE CLASS EVEN IT HAS ACCESS 
// FRiend function is not a member fucntion of a class
using namespace std;
class A {
	int x;
public:
	A():x{10}{}
	friend class B;
};
class B {
	int b;
public:
	B():b{20}{}
	void show(A &obj) {
		cout<<obj.x<<endl;
	}
};



//////////////////////////////
class Base {
	int x;
	friend int get(Base &); 
public:
	Base() {}
	Base(int a):x{a} {}
	friend void Sett(Base&,int);
	
};
int get(Base &obj) {
	return obj.x;
}
void Sett(Base& obj,int x) {
	obj.x=x;
}

/////////////
/////////////
class BB;
class AA {
public:
	void showBasefxn(BB &obj){
		cout<<"Base fxn :"<<obj.b<<endl;
	}	
};

class BB {
	int b;
public:
	BB(int x):b{x}{}
	friend void AA::showBasefxn(BB &);	
};

// void AA::showBasefxn(BB &obj) {
// 	cout<<"Base fxn :"<<obj.b<<endl;
// }
int main() {

	//ex 1
	// Base obj(10);
	// Sett(obj,20);
	// cout<<get(obj)<<endl;

	//ex::2
	// A a;
	// B b;
	// b.show(a);

	/// ex::3
	AA Aobj;
	BB Bobj(10);
	Aobj.showBasefxn(Bobj);

	return 0;
}