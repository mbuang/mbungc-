#include <conio.h>
#include <iostream>
using namespace std;
main()
{
    char kobar,buku[20],bns,beli,lagi,yt,alasan[50];
    float totbay,jumbel,totbel,potongan,harga;
    kembali:

    cout<<""<<endl;
    cout<<"____________________________________________________________________________________________\n";
    cout<<"|                                 TOKO BUKU APA SAJA                                       |\n";
    cout<<"|                                  BUKAN TOKO OBAT                                         |\n";
    cout<<"|                                JL.KEBAJIKAN No. 77                                       |\n";
    cout<<"--------------------------------------------------------------------------------------------\n\n\n";
    cout<<"----------------------------------------List Buku-------------------------------------------\n\n";
    cout<<"1. Cara Menjadi Abadi            4. Rahasia Dibulak Balik            7. Tesis Filsafat\n";
    cout<<"2. Cara Menjadi Awet Muda        5. Novel Lokasi Kebusukan Hati      8. Biografi Creator\n";
    cout<<"3. Mencari Mutiara Didasar Hati  6. Biografi Saya                    9. Modul CCNA\n\n\n";
    cout<<" Masukkan Kode Buku [1-9]   : ";cin>>kobar;
    cout<<" Jumlah Pembelian Buku Anda : ";cin>>jumbel;
    cout<<" Alasan membeli buku        : ";cin>>alasan;
    cout<<"\n ";

cout<<"------------------------------------------------------------------------------------------------"<<endl;
    cout<<" Nama Buku yang Anda Beli     :"<<buku;
switch(kobar)
 {
  case ('1') :
      {
      cout<<"Cara menjadi Abadi"<<buku;
      harga= 50000*jumbel ;
      }
      break;
  case ('2') :
      {
      cout<<"Cara menjadi Awet Muda"<<buku;
      harga= 35000*jumbel;
      }
      break;
  case ('3') :
      {
      cout<<"Mencari Mutiara Didasar Hati"<<buku;
      harga= 45000*jumbel;
      }
      break;
  case ('4') :
      {
      cout<<"Rahasia dibulak balik"<<buku;
      harga= 60000*jumbel ;
      }
