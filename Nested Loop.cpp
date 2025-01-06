#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int no[3][4]= {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    for(int a=0;a<3;a++)
    {
        for(int b=0;b<4;b++)
        {
        cout<<"Pada data ke-"<<a<<","<<b<<" = "<<no[a][b]<<endl;
        }
    }
    getch0;
    return 0;
}
