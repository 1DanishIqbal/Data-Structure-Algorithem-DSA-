#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* prev;
	Node* next;
};

int main(){
	// create three Nodes dynamcally
	Node* head = new Node;
	Node* second = new Node;
	Node* third = new Node;
	
	// connect first node
	head -> data = 10;
	head -> prev = NULL;
	head -> next = second;
	
	// connect second node
	second -> data = 20;
	second -> prev = head;
	second -> next = third;
	
	// connect third node
	third -> data = 30;
	third -> prev = second;
	third -> next = NULL;
	
	// Forward Traversal start at Head
	cout << "\n\tForward Traveral : ";
	Node* temp = head;
	int count = 0;
	
	while(temp != NULL){
		cout << temp -> data << " <-> ";
		temp = temp -> next;
		count ++;
	}
	cout << "NULL" << endl;
	
	// Backward Traversal start at the Last Node
	cout << "\n\tBackward Traversal : ";
	temp = third;
	
	while(temp != NULL){
		cout << temp -> data << " <-> ";
		temp = temp -> prev;
	}
	cout << "NULL" << endl;
	cout << "\n  Total Node = " << count << endl;
}
