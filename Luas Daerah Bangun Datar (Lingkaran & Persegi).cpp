#include <iostream>
#include<iomanip>
#include <conio.h>
using namespace std;
int main()
{
    int a;
    float jari2,lpersegi,llingkaran,ldaerah;
    cout<<"Pada kasus perhitungan luas saat ini, disediakan sebuah bangun datar persegi\n";
    cout<<"yang ditutupi oleh sebuah lingkaran diatasnya. Diketahui panjang sisi persegi\n";
    cout<<"adalah 4 centimeter. Berapakah luas daerah yang tidak ditutupi oleh lingkaran\n\n";
    cout<<" Diketahui \t=\n ";
    cout<<"\tPanjang sisi persegi\t= ";
            cin>>a;
    cout<<"\n";

    cout<<" Ditanya \t=\n";
            cout<<"\tBerapakah luas bagian yang diarsir atau yang tidak tertutup oleh\n";
            cout<<"\tlingkaran?\n";
            cout<<"\n";

    //rumus
    cout<<" Jawab \t\t=\n";
            cout<<"\tjika panjang sisi persegi "<<a<<" maka panjang jari-jari lingkaran adalah\n";
            jari2=float(a)/2;
            cout<<"\t\tPanjang sisi persegi \t: 2 \t= Jari-jari Lingkaran \n";
            cout<<"\t\t\t"<<a<<" \t\t: 2 \t= "<<jari2;
            cout<<"\n\n";

    //Rumus Lanjutan Luas Persegi
    cout<<"\tMenghitung luas Persegi\n";
    cout<<"\tPanjang sisi persegi \t= "<<a;
    cout<<"\n";
    lpersegi=float(a)*a;
    cout<<"\t sisi \tx sisi \t\t= luas persegi\n";
    cout<<"\t "<<a<<" \tx "<<a<<" \t\t= "<<lpersegi;
    cout<<"\n\n";

    //Rumus Lanjutan Luas Lingkaran
    cout<<"\tMenghitung luas Lingkaran\n";
    cout<<"\tPanjang jari-jari \t= "<<jari2;
    cout<<"\n";
    llingkaran=float(3.14)*jari2*jari2;
    cout<<"\t 3.14 \tx jari^2 \t= luas lingkaran\n";
    cout<<"\t 3.14 \tx "<<jari2<<" \tx "<<jari2<<" \t= "<<llingkaran;
    cout<<"\n\n";

    //Rumus Lanjutan Luas Daerah yang diarsir
    cout<<" Luas daerah yang diarsir adalah\n";
    cout<<" Luas Persegi \t- Luas Lingkaran \t= luas Daerah yang Diarsir\n";
    ldaerah=float(lpersegi)-llingkaran;
    cout<<" "<<lpersegi<<" \t\t- "<<llingkaran<<" \t\t= "<<ldaerah;
    cout<<endl;
    cout<<"Jadi luas daerah yang diarsir adalah "<<ldaerah;
    cout<<endl;

getch();
}
