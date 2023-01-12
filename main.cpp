#include <iostream>

using namespace std;

int maxOfArray(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int* inputArray(int size) {
    int array[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    return array;
}

int main() {
    cout << maxOfArray(inputArray(5), 5);
    return 0;
}
