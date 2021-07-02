#include <iostream>
using namespace std;

void incrementer(int i, int *pointeur_j, int &k) {
    i++;
    (*pointeur_j)++;
    k++;
}

int main() {
    int i = 10;
    int j = 10;
    int k = 10;
    incrementer(i, &j, k);
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    cout << "k = " << k << endl;

    int tableau[10];
    for (int i = 0; i < 10; i++) {
        tableau[i] = i;
    }
    // *(tableau + 0) = tableau[0]
    // *(tableau + 1) = tableau[1]
    incrementer(tableau[0], &tableau[1], tableau[2]);
    for (int i = 0; i < 10; i++) {
        cout << " tableau[" << i << "] = " << tableau[i] << endl;
    }
}
