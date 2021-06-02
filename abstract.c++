#include<bits/stdc++.h>
using namespace std;

class Printable {
public:
	virtual string GetClassName()=0;
};

class Entity :public Printable{
public:
	// virtual string GetName() {
	// 	return "Entity";
	// }
	string GetClassName() {
		return "Entity ";
	}
};

class Player: public Entity {
	string m_Name;
public:
	Player(const string &name):m_Name{name} {}
	// string GetName() override {
	// 	return m_Name;
	// }
	string GetClassName() {
		return "Player ";
	}
};
void Print(Printable* obj) {
	cout<<obj->GetClassName()<<endl;
}

int main() {
	Entity *e=new Entity();
	cout<<e->GetClassName();

	Player *p=new Player("Anurag");
	p->GetClassName();
	// Print(p);
	return 0;
}