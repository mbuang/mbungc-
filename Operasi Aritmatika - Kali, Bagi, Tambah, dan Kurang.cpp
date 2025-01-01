#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int a,b,c,d,e,f,g,h;
    int h1,h2,h3,h4;
    //Kalkulator matematika dasar
    cout<<"=========== Kalkulator Aritmatika Dasar ============";
    cout<<"\n";

    //ini penjumlahan
    cout<<"Operasi Penjumlahan\n";
    cout<<"\tMasukkan angka pertama \t= ";cin>>a;
    cout<<"\tMasukkan angka kedua \t= ";cin>>b;
    h1=a+b;
    cout<<"\tHasil penjumlahan dari "<<a<<" ditambah dengan "<<b<<" adalah "<<h1;

    //ini pengurangan
    cout<<"\n";
    cout<<"#. Operasi Pengurangan\n";
    cout<<"\tMasukkan angka pertama \t= ";cin>>c;
    cout<<"\tMasukkan angka kedua \t= ";cin>>d;
    h2=c-d;
    cout<<"\tHasil pengurangan dari "<<c<<" ditambah dengan "<<d<<" adalah "<<h2;

    //ini pengalian
    cout<<"\n";
    cout<<"#. Operasi perkalian\n";
    cout<<"\tMasukkan angka pertama \t= ";cin>>e;
    cout<<"\tMasukkan angka kedua \t= ";cin>>f;
    h3=e*f;
    cout<<"\tHasil penjumlahan dari "<<e<<" ditambah dengan "<<f<<" adalah "<<h3;

    //ini pembagian
    cout<<"\n";
    cout<<"#. Operasi Pembagian\n";
    cout<<"\tMasukkan angka pertama \t= ";cin>>g;
    cout<<"\tMasukkan angka kedua \t= ";cin>>h;
    h4=g/h;
    cout<<"\tHasil pembagian dari "<<g<<" ditambah dengan "<<h<<" adalah "<<h4;

    cout<<"\n\n";
    cout<<"Selesai...";
getch();
}
