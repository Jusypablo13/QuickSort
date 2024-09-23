#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &vec, int low, int high) {
    int pivot = vec[low]; // Escoger el primer elemento como pivote
    int leftWall = low;   // Pared izquierda

    for (int i = low + 1; i <= high; i++) {
        if (vec[i] < pivot) {
            leftWall++; // Incrementar la pared izquierda
            swap(vec[i], vec[leftWall]); // Intercambiar los elementos
        }
    }
    swap(vec[low], vec[leftWall]); // Intercambiar el pivote con el elemento en la pared izquierda

    return leftWall; // Retornar la posicion del pivote
}

// Escoger un pivote "median of three"
void quickSort(vector<int> &vec, int low, int high) {
    if (low < high) {
        int pivot = partition(vec, low, high); // Obtener el pivote
        quickSort(vec, low, pivot - 1);        // Ordenar los elementos antes del pivote
        quickSort(vec, pivot + 1, high);       // Ordenar los elementos despues del pivote
    }
}

int main() {
    vector<int> vec = {3, 6, 8, 10, 1, 2, 1};
    quickSort(vec, 0, vec.size() - 1);
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ", ";
    }

    return 0;
}