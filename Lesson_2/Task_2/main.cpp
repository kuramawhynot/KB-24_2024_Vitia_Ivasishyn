#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int arr[4];

    for (int i = 0; i < 5; i++) {
        cout << "Enter " << (i + 1) << " value: ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] > x) {
            x = arr[i];
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[j] > i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
