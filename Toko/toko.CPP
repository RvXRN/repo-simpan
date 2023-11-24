#include <iostream>
#include <conio.h>
#include <string>


int main () {

	float diskon, hargadiskon;
   int harga,barang,totalharga,jmlbarang;
   string nbarang,ketdiskon,input;

   awal:
	cout << "=======================================================" << endl;
   cout << "========= SELAMAT DATANG DI TOKO MURAH MERIAH =========" << endl;
   cout << "=======================================================" << endl;
   cout << endl;
   cout << "No	Barang		 		Harga " << endl;
   cout << "1. 	Kaos				Rp.100000 " << endl;
   cout << "2. 	Kemeja Batik 			Rp.150000 " << endl;
   cout << "3.	Celana Training			Rp.175000" << endl;
   cout << endl;
   cout << "=======================================================" << endl;
   cout << endl;
   cout << "Masukkan Barang yang ingi dibeli (1-3): ";
   cin >> barang;

 	if (barang == 1) {
   harga = 100000;
   nbarang = "Kaos";
   } else if (barang == 2) {
   harga = 150000;
   nbarang = "Kemeja Batik";
   } else if (barang == 3) {
   harga = 175000;
   nbarang = "Celana Training";
   } else {
   nbarang = "Harap pilih barang 1-3";
   }

clrscr();
   cout << "==================== INFO DISKON ======================" << endl;

   cout << "Jika anda membeli 2 barang diskon = 15%" << endl;
   cout << "Jika anda membeli 3 barang diskon = 20%" << endl;
   cout << "Jika anda membeli 5 barang diskon = 35%" << endl;
   cout << endl;
   cout << endl;
   cout << "=======================================================" << endl;
   cout << "===================== KERANJANG =======================" << endl;
   cout << "=======================================================" << endl;
   cout << endl;
	cout << "Barang			 	: " << nbarang << endl;
   cout << "Harga				: " << harga << endl;
   cout << "Berapa Jumlah yang ingin dibeli : "; cin >> jmlbarang;



   totalharga = harga * jmlbarang;


   if (jmlbarang < 2 ) {
   diskon = totalharga;
   hargadiskon = totalharga;
   ketdiskon = "Anda tidak mendapatkan diskon";
   } else if (jmlbarang == 2 ) {
   diskon = totalharga * 0.15;
   hargadiskon = totalharga - diskon;
   ketdiskon = "Anda mendapatkan diskon 15%";
   } else if (jmlbarang <= 4){
   diskon = totalharga * 0.20;
   hargadiskon = totalharga - diskon;
   ketdiskon = "Anda Mendapatkan diskon 20%";
   } else if (jmlbarang >= 5 ) {
   diskon = totalharga * 0.35;
   hargadiskon = totalharga - diskon;
   ketdiskon = "Anda mendapatkan diskon 35%";
   }

clrscr();


   cout << "=======================================================" << endl;
   cout << "===================== CHECK OUT =======================" << endl;
   cout << "=======================================================" << endl;
   cout << endl;
	cout << "Barang			: " << nbarang << endl;
   cout << "Jumlah Barang 		: " << jmlbarang << endl;
   cout << "Total Harga 		: Rp." << totalharga << endl;
   cout << "Diskon			: " << ketdiskon << endl;
   cout << "Harga setelah diskon 	: Rp." << hargadiskon << endl;
	cout << endl;
   cout << endl;
  	cout << "========================================================" << endl;
   cout << "==== TERIMAKASIH TELAH BELANJA DI TOKO MURAH MERIAH ====" << endl;
   cout << "========================================================" << endl;

   cout << endl;
   cout << endl;

   cout << "Apakah ingin kembali belanja [Y/N]: ";
   cin >> input;
   clrscr();
   if (input == "y" || input =="Y"){
   	goto awal;
      }else{
      	getch();
      }
}




