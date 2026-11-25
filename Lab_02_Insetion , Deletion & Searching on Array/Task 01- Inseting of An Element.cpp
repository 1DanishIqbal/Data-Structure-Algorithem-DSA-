#include<iostream>
using namespace std;

int main(){
	
	int arr[100] = {10, 20, 30, 40, 50};
	int size = 5;
	int position = 3 ;
	int newValue = 25;
	
	cout << "The Original array is = ";
	for(int i=0; i<5; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	for(int i=size; i>=position; i--){
		arr[i] = arr[i -1];
		
	}
	
	arr[position -1] = newValue;
	
	cout << "Array After adding new Value = ";

	for(int i=0; i<=5; i++){
		cout <<arr[i] << " ";
	}
	
	return 0;
	
}
