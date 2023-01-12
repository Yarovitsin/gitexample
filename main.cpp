#include <iostream>

using namespace std;

int minOfArray(int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int* inputArray(int size) {
    int array[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    return array;
}

int main() {
    cout << minOfArray(inputArray(5), 5);
    return 0;
}
