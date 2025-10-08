// Fungsi untuk deposito dan menyimpan nilai supaya bisa di depositkan berkali-kali
int deposit(int saldof, int jumlahf)
{
    int saldo_baru = saldof + jumlahf;
    cout << "Anda melakukan deposit sebesar" << " Rp" << saldo_baru << endl;
    return saldo_baru;
}

// Fungsi utama main untuk menjalankan program
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

            // Menyimpan nilai dalam fungsi deposit ke variabel saldo
            saldo = deposit(saldo, jumlah);
            break;