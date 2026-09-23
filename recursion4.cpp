#include <iostream>
using namespace std;

int maximoElemento(int arr[], int tamano);

int main() {
    int arr[5] = {4, 16, 10, 6, 26};
    cout << maximoElemento(arr, 5) << endl;
    return 0;
}

int maximoElemento(int arr[], int tamano) {
    if (tamano == 1) {
        return arr[0];
    }
    int maxResto = maximoElemento(arr, tamano - 1);
    if (arr[tamano - 1] > maxResto) {
        return arr[tamano - 1];
    } else {
        return maxResto;
    }
}