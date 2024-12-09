#include <iostream>
#include <conio.h>
using namespace std;

// === Variabel Global ===
int n;  // Variabel global untuk jumlah data

// === Coding 1: Fungsi untuk Menukar Nilai ===
void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// === Coding 2: Fungsi untuk Menampilkan Menu ===
void dMenu() {
    system("cls");
    cout << "Aplikasi Tampilan Menu" << "\n";
    cout << "1. Input Data" << "\n";
    cout << "2. Tampilkan Data" << "\n";
    cout << "3. Sorting Ascending" << "\n";
    cout << "4. Sorting Descending" << "\n";
    cout << "5. Exit" << "\n";
    cout << "Masukkan angka : ";
}

// === Coding 3: Fungsi untuk Input Data ===
void inputData(int data[]) {
    system("cls");
    cout << "Masukkan jumlah data: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> data[i];
    }
    cout << "Data berhasil dimasukkan!\n";
    getch();
}

// === Coding 4: Fungsi untuk Menampilkan Data ===
void tampilkanData(int data[]) {
    system("cls");
    if (n == 0) {
        cout << "Belum ada data yang dimasukkan!" << endl;
    } else {
        cout << "Data saat ini: ";
        for (int i = 0; i < n; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
    getch();
}

// === Coding 5: Fungsi untuk Sorting Ascending ===
void sortAsc(int data[]) {
    system("cls");
    if (n == 0) {
        cout << "Belum ada data yang dimasukkan!" << endl;
    } else {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (data[j] > data[j + 1]) {
                    tukar(&data[j], &data[j + 1]);
                }
            }
        }
        cout << "Data setelah diurutkan secara ascending: ";
        tampilkanData(data);
    }
    getch();
}

// === Coding 6: Fungsi untuk Sorting Descending ===
void sortDsc(int data[]) {
    system("cls");
    if (n == 0) {
        cout << "Belum ada data yang dimasukkan!" << endl;
    } else {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (data[j] < data[j + 1]) {
                    tukar(&data[j], &data[j + 1]);
                }
            }
        }
        cout << "Data setelah diurutkan secara descending: ";
        tampilkanData(data);
    }
    getch();
}

// === Fungsi Utama (main) ===
int main() {
    int data[100];  // Variabel lokal untuk menyimpan data array

    char pl;
    do {
        dMenu();
        pl = getch();
        switch (pl) {
            case '1':
                inputData(data);
                break;
            case '2':
                tampilkanData(data);
                break;
            case '3':
                sortAsc(data);
                break;
            case '4':
                sortDsc(data);
                break;
            case '5':
                cout << "Terima kasih! Keluar dari program." << endl;
                break;
            default:
                system("cls");
                cout << "Pilihan Tidak Tersedia" << endl;
                getch();
                break;
        }
    } while (pl != '5');

    return 0;
}
