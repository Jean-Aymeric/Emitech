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
}
