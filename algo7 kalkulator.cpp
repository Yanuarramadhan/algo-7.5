#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <cstdlib>

using namespace std;

int main ()
{
int pilih,a,b;
char lagi;
menu:
cout<<"\n                             MENU PRogram penjumlahan,pengurangan,pembagian\n";
cout<<"                                            dan perkalian\n"<<endl;

cout<<" ======================================================================\n";
cout<<" |Pilihan Operator : 1. Penjumlahan    3. Perkalian       \n";
cout<<" |                   2. Pengurangan    4. Pembagian                                 |\n";
cout<<" ======================================================================\n"<<endl;
cout<<" Pilih No Operator [1-4] : "; cin>>pilih;
if (pilih == 1){
 cout<<"\n    PENJUMLAHAN    \n";
 cout<<" Masukkan Angka Pertama : ";cin>>a;
 cout<<" Masukkan Angka Kedua   : ";cin>>b;
 cout<<"\n Maka Hasil Penjumlahan dari "<<a<<" dan "<<b<<" adalah : "<<a+b<<endl;
}else if (pilih == 2){
 cout<<"\n    PENGURANGAN    \n";
 cout<<" Masukkan Angka Pertama : ";cin>>a;
 cout<<" Masukkan Angka Kedua   : ";cin>>b;
 cout<<"\n Maka Hasil Pengurangan dari "<<a<<" dan "<<b<<" adalah : "<<a-b<<endl;
}else if (pilih == 3){
 cout<<"\n    PERKALIAN   \n";
 cout<<" Masukkan Angka Pertama : ";cin>>a;
 cout<<" Masukkan Angka Kedua   : ";cin>>b;
 cout<<"\n Maka Hasil Perkalian dari "<<a<<" dan "<<b<<" adalah : "<<a*b<<endl;
}else if (pilih == 4){
 cout<<"\n    PEMBAGIAN    \n";
 cout<<" Masukkan Angka Pertama : ";cin>>a;
 cout<<" Masukkan Angka Kedua   : ";cin>>b;
 cout<<"\n Maka Hasil Pembagian dari "<<a<<" dan "<<b<<" adalah : "<<a/b<<endl;
}else if (pilih > 4 || pilih < 1) {
 cout<<" Maaf... Nomor Tidak Sesuai Dengan Semua Pilihan!!! \n Coba Lagi.";
 system("pause");
 system("cls");
 goto menu;
}
 cout<<" Coba Lagi? (y atau t) : " ;cin>>lagi;
  if (lagi =='y' || lagi =='Y'){
    system("pause");
  system("cls");
  goto menu;
 }
}
