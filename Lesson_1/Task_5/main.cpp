#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Введіть число для отримання малюнка!\n";
    cin >> size;

    // Малюємо трикутник з відступами
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << "\n";
    }

    // Малюємо стовбур ялинки
    int width = size / 5;
    int height = size / 5;

    for (int i = 0; i < height; i++) {
        for (int j = 1; j < size - width + 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < width; k++) {
            cout << "*";
        }
        cout << "\n";
    }

}
