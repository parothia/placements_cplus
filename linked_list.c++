#include<bits/stdc++.h>
using namespace std;

struct  node
 {
 	int data;
 	node *next;
 }; 

 class linklist {
 private:
 	node *head,node *tail;
 public:
 	linklist() {
 		head=NULL;
 		tail=NULL;
 	}
 	void addNode(int val) {
 		node *tmp=new  node;
 		tmp->data=val;
 		tmp->next=NULL;
 		if(head==NULL) {
 			head=tmp;
 			tail=tmp;
 		}
 		else {
 			tail->next=tmp;
 			tail=tail->next;
 		}
 	}
 	display() {
 		node *curr=head;
 		while(curr) {
 			cout<<curr->data<<" ";
 			curr=curr->next;
 		}
 	}
 };

 int main() {
 	linklist a;
 	a.addNode(1);
 	a.addNode(2);
 	a.display();
 	return 0;
 }
