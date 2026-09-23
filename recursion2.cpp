#include <iostream>
using namespace std;

int sumaArreglo(int arr[], int tamano);

int main() {
    int arr[5] = {4, 6, 10, 16, 26};
    cout << sumaArreglo(arr, 5) << endl;
    return 0;
}

int sumaArreglo(int arr[], int tamano) {
    if (tamano == 0) {
        return 0;
    }
    return arr[tamano - 1] + sumaArreglo(arr, tamano - 1);
}