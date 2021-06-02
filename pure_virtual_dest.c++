#include<iostream>
using namespace std;
class Base {
    public:
        virtual ~Base()=0;  //pure virtual destructor
};

// must be defined
Base::~Base() {
    cout<<"Base constructor"<<endl;
}
// ONE thing to note if it is not extended it fails in compilation
// because it is pure so it becomes abstract even though we defined it outside
class Derived: public Base {
    public:
        ~Derived() {
            cout<<"Derived dest"<<endl;
        }
};

int main() {
    Base *b=new Derived();
    delete b;
    return 0;
}