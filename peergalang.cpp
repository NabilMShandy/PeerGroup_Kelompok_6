// 2. Dalam menu deposito, menggunakan function yang mengembalikan nilai supaya nilai sebelumnya disimpan dan dapat dijumlahkan dengan nilai baru
int deposit(int saldof, int jumlahf)
{
    int saldo_baru = saldof + jumlahf;
    cout << "Anda melakukan deposit sebesar" << " Rp" << saldo_baru << endl;
    return saldo_baru;
}

// Break saat user memilih keluar program
case 4:
break;

// Message untuk user agar memilih antara 1-4
default:
cout << "Invalid!\n";
break;
}
}
while (pilihan != 4)
    ;

cout << "Terima Kasih telah menggunakan!\n";

return 0;
}