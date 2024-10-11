#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace this_thread;

    int main(){

    int size;
    cout << "Введіть розмір трикутника: ";
    cin >> size;

    while (true) { //"true" для того щоб зробити її нескінченну

        system("cls");
        for (int i = 1; i <= size; ++i) {
            for (int j = 1; j <= i; ++j) {
                if (j == 1 || j == i || i == size) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        sleep_for(chrono::milliseconds(500));

        system("cls");
        for (int i = 1; i <= size; ++i) {
            for (int j = 1; j <= size - i; ++j) {
                cout << " ";
            }
            for (int k = 1; k <= i; ++k) {
                if (k == 1 || k == i || i == size) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        sleep_for(chrono::milliseconds(500));


        system("cls");
        for (int i = size; i >= 1; --i) {
            for (int j = 1; j <= i; ++j) {
                if (j == 1 || j == i || i == size) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        sleep_for(chrono::milliseconds(500));


        system("cls");
        for (int i = 1; i <= size; ++i) {
            for (int j = 1; j < i; ++j) {
                cout << " ";
            }
            for (int k = 1; k <= size - i + 1; ++k) {
                if (k == 1 || k == size - i + 1 || i == 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        sleep_for(chrono::milliseconds(500));
    }

}

