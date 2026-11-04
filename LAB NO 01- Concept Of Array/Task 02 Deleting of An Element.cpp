#include<iostream>
using namespace std;

int main(){
	int arr[100] = {10, 20, 30, 40, 50};
	int size = 5;
	int position = 3 ;
	
	
	cout << "The Original array is = ";
	for(int i=0; i<5; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	for(int i=position -1; i < size - 1; i++){
		arr[i] = arr[i + 1];
		
	}
	size--;
	
	cout << "Array After Deleting Value = ";

	for(int i=0; i < size; i++){
		cout <<arr[i] << " ";
	}
	
	return 0;
}
