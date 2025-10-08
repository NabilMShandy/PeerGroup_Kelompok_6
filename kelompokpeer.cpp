#incldue < iostream>
using namespace std;

// Global variabel supaya bisa diakses pada function main
int saldo;
int tarikk;

void menu()
{
    cout << "================================\n";
    cout << "PROGRAM SEDERHANA MENYIMPAN UANG\n";
    cout << "================================";
    cout << "\n";
    cout << "Pilih menu yang ingin digunakan\n";
    cout << "1. DEPOSTIO UANG\n";
    cout << "2. TARIK TUNAI\n";
    cout << "3. CEK SALDO\n";
    cout << "4. KELUAR PROGRAM\n";
}