#include <iostream>
using namespace std;

bool buscarRec(const int A[], int n,int x); //Prototipo de la funcion

int main() {
    int A[50];
    int n, x;

    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "Ingrese el numero a buscar: ";
    cin >> x;

    if (buscarRec(A, n, x)) {
        cout << "Se encontro el numero solicitado." << endl;
    } else {
        cout << "No se encontro el numero solicitado." << endl;
    }

    return 0;
}

bool buscarRec(const int A[], int n, int x) {  
    // Caso base 1: Arreglo recorrido completamente sin encontrar x
    if (n <= 0) {
        return false;
    }
    // Caso base 2: El elemento en la posición actual es x
    if (A[n - 1] == x) {
        return true;
    }

    return buscarRec(A, n - 1, x);
}
