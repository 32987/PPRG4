#include <iostream>
using namespace std;

void zad4_1() {
    int rozmiar;
    while (true) {
        cout << "Wpisz rozmiar tablicy: ";
        cin >> rozmiar;
        if (rozmiar <= 0) {
            cout << "Tablica musi miec dodatnia liczbe elementow. Sprobuj jeszcze raz." << endl;
        }
        else {
            break;
        }
    }
    int* tablica = new int[rozmiar];

    for (int i = 0; i < rozmiar; i++) {
        int element;
        cout << "Wpisz " << i + 1 << ". element tablicy: ";
        cin >> element;
        tablica[i] = element;
    }
    
    int najw = tablica[0];
    for (int i = 0; i < rozmiar; i++) {
        if (tablica[i] > najw) {
            najw = tablica[i];
        }
    }

    cout << "\nNajwiekszym elementem tablicy jest " << najw << "." << endl;
    delete[] tablica;
}

int main()
{
    zad4_1();
}
