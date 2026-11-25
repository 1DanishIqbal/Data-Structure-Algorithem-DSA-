#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

int main(){
	// create three node dynamacally
	
	Node* head = new Node;
	Node* second = new Node;
	Node* third = new Node;
	
	//store data and connect with node
	
	head -> data = 10;
	head -> next = second;
	
	second -> data = 20;
	second -> next = third;
	
	third -> data = 30;
	third -> next = NULL;
	
	// Traverese the list from the first node;
	
	Node* temp = head;
	int count = 0;
	cout << "Linked List : ";
	
	while(temp != NULL){
		cout << temp -> data << " -> ";
		count++;
		temp = temp -> next;
	}
	cout << "NULL" << endl;
	cout << "Total Node = "<< count << endl;
	
	// Release dynamacally allocated memory
	
	delete head;
	delete second;
	delete third;
	
	return 0;
}
