
#include<iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int value;
    bool found = false;

    cout << "Enter value to search: ";
    cin >> value;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == value) {
            cout << "Value found at index: " << i;
            found = true;
            break;
        }
    }

    if(found == false) {
        cout << "Value not found!";
    }

    return 0;
}

