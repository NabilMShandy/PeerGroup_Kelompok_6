// Kondisi saat user menarik uangnya
// 3. Dalam menu Tarik tunai, menggunakan function void untuk menampilkan berapa uang yang ditarik
void tarik(int tarikk)
{
    cout << "Anda melakukan penarikan uang sebesar: " << tarikk << endl;
}

case 2:
cout << "Masukkan jumlah uang yang ingin ditarik: ";
cin >> tarikk;

// Tidak boleh menarik uang minus
if (tarikk < 0)
{
    cout << "Anda tidak bisa menarik uang minus\n";
    break;
}
// Tidak boleh menarik uang lebih dari saldo yang dimiliki
else if (tarikk > saldo)
{
    cout << "Saldo tidak cukup!\n";
    break;
}
// Mengurangi saldo yang dimiliki dengan jumlah penarikan uang
else
{
    saldo = saldo - tarikk;
    break;
}
// BAGIAN NAILAH
