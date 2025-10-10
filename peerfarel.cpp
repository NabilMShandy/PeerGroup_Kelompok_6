
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