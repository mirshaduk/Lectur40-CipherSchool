#include <iostream>
using namespace std;

int main() {
    cout << "Input an array of elements which you are to sort. Let us: 6 elements\n";

    int a[6]; 
    for (int i = 0; i < 6; i++) cin >> a[i];

    int key, j;
    for (j = 1; j < 6; j++) { 
        key = a[j];
        int i = j - 1;

        while (i >= 0 && a[i] > key) { 
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 6; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}
