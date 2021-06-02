#include<bits/stdc++.h>
using namespace std;

////////////////////////////////////////////////////
//////private constructor using static function///////
//////////////////////////////////////////////////////////

class Base {
private:
	Base() {
		cout<<"Base constructor\n";
	}
public:
	static Base* staticfxn() {
		Base *ptr=new Base();
		cout<<" Base static function\n";
		return ptr;
	}
	~Base() {
		cout<<"Base destructor\n";
	}
	void fxn() {
		cout<<" Base function\n";
	}
};

int main() {
	Base *b=Base::staticfxn();
	b->fxn();
	delete(b);
}


///////////////////////////////////////////////////
/////////private constructor using friend fxn()////
///////////////////////////////////////////////////

class Base {
private:
	Base() {
		cout<<"Base constructor\n";
	}
public:
	~Base() {
		cout<<"Base destructor\n";
	}
	friend Base* friendfxn();
	void fxn() {
		cout<<" Base function\n";
	}
};

Base *friendfxn() {
	cout<<" Friendfxn\n";
	return new Base();
}

int main() {
	Base *b=friendfxn();
	b->fxn();
	delete(b);
}


/////////////////////////////////////////
/////////////Private destructor functioning/////
/////////////////////////////////////////////////
class Base {
	~Base() {
		cout<<"Private Destructor\n";
	}
	friend void friendfxn(Base *);
public:
	Base() {
		cout<<"Base constructor\n";
	}
	void fxn() {
		cout<<"Function \n";
	}
};

void friendfxn(Base *ptr) {
	cout<<" friendfxn\n";
	delete(ptr);
}

int main(){
	Base *ptr=(Base *)malloc(sizeof(Base)); //also worked
 Base *ptr=new Base(); //also worked
we can call free but cannot call delete
	ptr->fxn();
	friendfxn(ptr);
	return 0;
}