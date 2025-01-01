#include <iostream>
#include<iomanip>
#include <conio.h>
using namespace std;
int main()
{
    int a,t;
    float hasil4;
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
