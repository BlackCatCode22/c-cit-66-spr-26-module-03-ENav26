#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int *p = &a;

    cout << "Pointer Basics:" << endl;
    cout << "Address stored in pointer p: " << p << endl;
    cout << "Value of a using pointer p: " << *p << endl;
    *p = 20;
    cout << "New value of a: " << a << endl << endl;

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "Pointer Array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Address of arr[" << i << "]: " << (ptr + i)
             << ", Value: " << *(ptr + i) << endl;
    }
    return 0;
}


