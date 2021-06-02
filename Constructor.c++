//1. constructor can be private,protected,public
//2. if private then we have to use static function or 
// friend function to construct object 

//////////////////example 1///////////////
///////////////////////////////////////

// #include<bits/stdc++.h>
// class A {
// private:
// 	A() {
// 		std::cout<<"constructor ";
// 	}
// 	~A() {
// 		std::cout<<"Destructor ";
// 	}
// public:
// 	void fxn() {
// 		std::cout<<"function ki maa ki";
// 	}
// 	static void construct(void *ptr) {
// 		std::cout<<"HH ";
// 		A *p=new A();
// 		ptr=p;
// 		delete(p); // this is confusion just check otherwise don't
// 		//mention it
// 	}
	
// };


// int main() {
// 	void *ptr=NULL;
// 	A::construct(ptr);
// 	((A *)ptr)->fxn();  // type casting to class A pointer
// 	return 0;
// }




///////////////////////////////////////////////////////
//////////////////////////////////////////////////
////////////USING FRIEND FUNCTION///////////////////

#include<bits/stdc++.h>
class Base {
	Base() {
		std::cout<<"Base constructor\n";
	}
	~Base() {
		std::cout<<"Base desstructor\n";
	}
public:
	friend class newBase;
};
class newBase {
public:
	newBase() {
		Base b;
		std::cout<<"newbase constructor\n ";
	}
	~newBase() {
		std::cout<<"newbase Destructor\n";
	}
};

int main() {
	newBase nb;
	return 0;
}