 #include<bits/stdc++.h>
using namespace std;
/* 
*/
extern int z;
void func() {
	static int loops=0;
	int loop=0;
	loops++;
	loop++;
	cout<<"loops: "<<loops<<endl;
	cout<<"loop: "<<loop<<endl;
}
int main() {
	int x=5;
	cout<<x<<endl;
	func();
	func();
	z=4;
	 cout<<"value from other file: "<<z<<endl;
	return 0;
}
