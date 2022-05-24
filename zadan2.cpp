# include <iostream>
# include <conio.h>
#include <locale>
using namespace std;
void vvod(int n,int m, int a[][4]);
void vivod(int n, int m, int a[][4]);
void minij(int a[][4],int n,int m, int& mi, int& mj);
void obmen(int a[][4],int n,int x, int y);
int  main()
{
     int d[3][4];
     int mi,mj;
     cout<<"Vvedite masiv"<<endl;
     vvod(3,4,d);
     minij(d,3,4,mi,mj);
     obmen(d,0,4,mi);
     cout<<"Dvumerny masiv"<<endl;
     vivod(3,4,d);
     _getch();
 }
void vvod(int n,int m,int a[][4])
{
    for(int i=0;i<n;i++)
     for(int j=0;j<m;j++)
     cin>>a[i][j];
}
void vivod(int n, int m, int a[][4])
{
    for(int i=0;i<n;i++,cout<<endl)
     for(int j=0;j<m;j++)
     cout<<a[i][j]<<"\t";
}
void minij(int a[][4],int n,int m, int& mi, int& mj)
    {mi=0;
    mj=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    if (a[i][j]>a[mi][mj])
    {    mi=i;
         mj=j;
    }
}
void obmen(int a[3][4],int n,int x, int y)
    {int b;
    for(int i=0;i<n;i++)
    {   b=a[x][i];
        a[x][i]=a[y][i];
        a[y][i]=b;
    }
}
