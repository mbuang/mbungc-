#include <iostream>
#include<iomanip>
#include <conio.h>
using namespace std;
int main()
{
    int a,t;
    float hasil4;
    char soal,nama[20],nim[20],lahir[20],tempatl[20],kampus[40];

    //Input biodata
    cout<<"\t\t\t=========== Menghitung Luas Bangun Datar ============";
    cout<<"\n\n\n";
    cout<<"Disini bangun datar yang akan dihitung luasnya adalah segitiga sama kaki atau sama sisi\n";
    cout<<"Proogram ini bertuajuan untuk memudahkan penggunanya dalam melakukan perhitugan luas segitiga\n";
    cout<<"Sehingga mengurangi penggunaan kertas dan meyelamatkan kita dari pemanasan global atau GLOBAL WARMING\n";
    cout<<"Yang menjadi isu panas di dunia saat ini.\n\n\n";
    cout<<"========================================================================================================\n\n\n";
    cout<<"Sebelum itu program wajib mengetahui siapa yang akan menggunakan program ini\n";
    cout<<"Isilah form ini dengan jujur\n";
    cout<<"Kamu siapa \t\t\t\t: "; cin.getline(nama ,20);
    cout<<"NIM mu berapa \t\t\t\t: "; cin.getline(nim, 20);
    cout<<"Tanggal Lahirmu berapa (dd-mm-yyyy) \t: "; cin.getline(lahir, 20);
    cout<<"Kampungmu mana \t\t\t\t: "; cin.getline(tempatl, 20);
    cout<<"Asal Kampus \t\t\t\t: "; cin.getline(kampus, 40);
    cout<<"\n\n";
    cout<<"... Terimakasih telah mengisi data ini dengan jujur\n";
    cout<<"Karena saat ini Indonesia krisis kejujuran\n";
    cout<<"\n\n\n";


    cout<<"=========== Perhitungan Luas ============\n";
    cout<<"Diketahui \t=\n ";
    cout<<"\tPanjang alas\t= ";
            cin>>a;
    cout<<"\tPanjang tinggi\t= ";
            cin>>t;
            cout<<"\n";

    cout<<"Ditanya \t=\n";
            cout<<"\tBerapakah luas segitiga?\n";
            cout<<"\n";

    //rumus
   hasil4=float((a)*t)/2;

    cout<<"Jawab \t\t=\n";
            cout<<"\n";

            cout<<"\t(alas x tinggi) : 2 \t= luas\n";
            cout<<"\t( "<<a<<" x "<<t<<" ) : 2 \t= "<<hasil4;
    cout<<endl;


getch();
}
