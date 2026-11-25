#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "How many Elements : ";
	cin >> n;
	
	int array[100];
	
	for(int i=0; i<n; i++){
		cout << "Element " << i + 1 <<" : ";
		cin >> array[i];
	}
	cout << "Array is : ";
	for (int i=0; i < n; i++){
		cout << array[i] << " ";
	}

	
	return 0;
}
