#include <iostream>
using namespace std;

// Deklarasi variabel untuk dipanggil
int saldo = 0;
int tarikk;

// 1. Menu awal berupa function void untuk menampilkan menu pilihan yang bisa diambil user
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

// 2. Dalam menu deposito, menggunakan function yang mengembalikan nilai supaya nilai sebelumnya disimpan dan dapat dijumlahkan dengan nilai baru
int deposit(int saldof, int jumlahf)
{
    int saldo_baru = saldof + jumlahf;
    cout << "Anda melakukan deposit sebesar" << " Rp" << saldo_baru << endl;
    return saldo_baru;
}

// 3. Dalam menu Tarik tunai, menggunakan function void untuk menampilkan berapa uang yang ditarik
void tarik(int tarik){
    cout << "Anda melakukan penarikan uang sebesar: " << tarik << endl;
}

// 4. User memilih di fungsi main
int main()
{
    int pilihan;
    int jumlah;

    // Menggunakan loop do while supaya menjalankan program setidaknya sekali sebelum loop berjalan
    do
    {
        menu(); 
        cout << "masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan jumlah yang ingin didepositkan: ";
            cin >> jumlah;
            
            if(jumlah < 0){
                cout << "Deposit tidak boleh negatif!\n";
                break;
            }

            saldo = deposit(saldo, jumlah);
            break;

        // Kondisi saat user menarik uangnya
        case 2:
            cout << "Masukkan jumlah uang yang ingin ditarik: ";
            cin >> tarikk;
            
            // Tidak boleh menarik uang minus
            if(tarikk < 0){
                cout << "Anda tidak bisa menarik uang minus\n";
                break;
            }
            // Tidak boleh menarik uang lebih dari saldo yang dimiliki
            else if(tarikk > saldo){
                cout << "Saldo tidak cukup!\n";
                break;
            }
            // Mengurangi saldo yang dimiliki dengan jumlah penarikan uang
            else{
                saldo = saldo - tarikk;
                break;
            }

        // Menampilkan saldo
        case 3:
            cout << "Saldo anda sekarang: "  << "Rp" << saldo << endl;
        
        // Break saat user memilih keluar program
        case 4:
            break;

        // Message untuk user agar memilih antara 1-4
        default:
            cout << "Invalid!\n";
            break;
        }

    } while (pilihan != 4);

    cout << "Terima Kasih telah menggunakan!\n";
    
    return 0;

}
