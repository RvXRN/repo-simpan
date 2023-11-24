#include <iostream>
#include <conio.h>
#include <string>

main () {
 float bb,tb,imt;
 string nama,keterangan,pesan;

 cout << "=================== KALKULATOR IMT ===================" << endl;
 cout << "================= (INDEK MASA TUBUH) =================" << endl;
 cout << endl;
 cout << "Masukkan Nama Anda : "; cin >> nama;
 cout << "Masukkan Berat Badan Anda (KG): ";  cin >> bb;
 cout << "Masukkan Tinggi Badan Anda (CM): "; cin >> tb;

 imt = bb / (pow(tb,2)*0.0001);

 if (imt <= 18.5) {
 	keterangan = "Berat Badan Kurang";
   pesan = "AYO BULKINGGG";
 	}

 	else if (imt >= 18.5 && imt < 22.9){
 	keterangan = "Berat Badan Normal";
   pesan = "PERTAHANKAN BERAT BADAN ANDA, LANJUT POLA HIDUP SEHAT,JANGAN LUPA OLAHRAGA";
   }

	else if (imt >= 23 && imt < 24.9) {
   keterangan = "Kelebihan berat badan (Overweight)";
   pesan = "AYOO DIETTT,JAGA POLA HIDUP SEHAT";
 	}

 	else if (imt >= 25 && imt < 29.9) {
   keterangan = "Obesitas I";
   pesan = "LU UDAH PARAH, AYOOO DIETTT";
	}

 	else if (imt > 29.9) {
 	keterangan = "Obesitas II";
   pesan = "LU PARAH BANGETTTTT, WAJIBBB DIETTTT";
   }

 clrscr();
 cout << "================= HASIL PEMERIKSAAN =================" << endl;
 cout << endl;
 cout << "Nama lengkap		: " << nama << endl;
 cout << "Berat Badan Anda	: " << bb << endl;
 cout << "Tinggi Badan Anda	: " << tb << endl;
 cout << "Menurut Klasifikasi WHO	: " << keterangan << endl;
 cout << "Pesan			: " << pesan << endl;

 getch ();
 }