#include<bits/stdc++.h>
using namespace std;
///////////////////////////////////////////////
///////SIMPLE PROGRAM////DESTRUCTOR///////////

// //sizeof empty class is 1
// class Person {
// 	int *x;
// public:
// 	Person() {
// 		std::cout<<"Constructor ";
// 	}
// 	Person(int *a) {
// 		x=a;
// 		std::cout<<"D Constructor\n";
// 	}
// 	void display() {
// 		std::cout<<"Person ";
// 	}
// 	~Person() {
// 		delete x;
// 		std::cout<<"Destructor ";
// 	}
// };

// int main() {
// 	Person p(new int(10));
// 	return 0;
// }



//////////////////////////////////////////////
////////VIRTUAL DESTRUCTOR//////////////////
///////////////////////////////////////
// important in polymorphism

class Base {
public:
	Base() {
		cout<<"Base Constructor\n ";
	}
	void Basefxn() {
		cout<<"Base fxn\n";
	}
	virtual ~Base() {
		cout<<"Base Desstructor\n ";
	}
};
class Derived:public Base {
public:
	Derived() {
		cout<<"Derived Constructor\n ";
	}
	virtual void Derivedfxn() {
		cout<<"Derived fxn\n";
	}
	~Derived() {
		cout<<"Derived Desstructor\n ";
	}
};

int main() {
	Base *base=new Base();
	delete base;
	Base* poly=new Derived();
	poly->Basefxn();
	((Derived*)poly)->Derivedfxn();
	delete poly;
}