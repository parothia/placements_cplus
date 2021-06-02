#include<bits/stdc++.h>
using namespace std;
//This is used to initialize data members of class
//can be used only with constructors
//two ways to do this
//1. using {} this is uniform initialisers and should be preferred.
//2. using ()
//{} used in narrowing i.e 4 to 1 byte int to char
//{} gives warning not error if some narrow is happening
// 300 send but accept char so warn but store 44(256+44)

// class Base {
// 	const int x;
// 	int y;
// public:
// 	Base(int a){
// 		x=a;
// 	}

// 	//OR
// 	Base(int a,int z):x{a},y{z} { }
// 	Base(int a):x{a} {}
// };
// int main() {
// 	Base b(10);
// }

// ///////////////////////
// if x is non-static const 
// 	then we must have to use MIL(member initialiser list) 
// it will work but 
// /////////////////////////
// if x is of type reference type 
// 	then we must have to use MIL

////////////////////////////////////////////
/////////////////////////////////////////
/////////////////////////////////////////////
// class A {
// 	int a;
// public:
// 	A() {
// 		cout<<" Default constructor\n";
// 	}
// 	A(int x) {
// 		a=x;
// 		cout<<"A constructor \n";
// 	}
// };

// class B:public A {
// public:
// 	B(int t) {
// 		//IF HERE NOT USED MIL THEN FAILED TO COMPILE
// 		//WE MUST HAVE TO USE MIL HERE
// 		cout<<"B Constructor\n";
// 	}
// };

// int main() {
// 	B b(100);
// 	return 0;
// }


////////////////////////////////////
/////////////////////////////////////
////////////////////////////////////////
class A {
	int a;
public:
	A(int x):a{x} {
		cout<<"A Constructor\n";
	}
};
class B {
private:
	A a;
public:
	B(int x):a(x) {
		cout<<"B Constructor\n";
	}
};

int main() {
	B b(100);
	return 0;
}
