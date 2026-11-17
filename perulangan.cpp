#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. Perulangan 'for' (digunakan jika jumlah iterasi sudah pasti)
    cout << "--- For Loop ---" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Iterasi ke-" << i << endl;
    }

    // 2. Perulangan 'while' (mengecek kondisi di awal sebelum eksekusi)
    cout << "\n--- While Loop ---" << endl;
    int angka = 1;
    while (angka <= 5) {
        cout << "Angka: " << angka << endl;
        angka++;
    }

    // 3. Perulangan 'do-while' (menjalankan blok minimal 1x sebelum mengecek kondisi)
    cout << "\n--- Do-While Loop ---" << endl;
    int x = 1;
    do {
        cout << "Nilai x: " << x << endl;
        x++;
    } while (x <= 5);

    // 4. Range-based 'for' (C++11 ke atas, praktis untuk array atau vector)
    cout << "\n--- Range-based For Loop ---" << endl;
    vector<string> buah = {"Apel", "Jeruk", "Mangga"};
    for (const string& item : buah) {
        cout << item << endl;
    }

    return 0;
}