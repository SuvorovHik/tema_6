# include <iostream>
# include <conio.h>
# include <locale>
# include <time.h>
# include <cstdlib>
using namespace std;
void vvod(int a[], int n);
void stroka(int a[], int n);
void zamena(int a[], int n);
int main()
{
    setlocale(0, "");
    int a[20];
    int n,k;
    cout<<"������� ���������� ��������� �������"; cin>>n;
    do
        {cout<<"1. ���� ������� ����� �����."<<endl;
        cout<<"2. ����� ������� � ������."<<endl;
        cout<<"3. ����� ������ �� ������� ����������� �������. �������� ��� ��������, ������� ����, �� ���� �������."<<endl;
        cout<<"4. ����� ������"<<endl;
        cout<<"������� ����� ������ ����"; cin>>k;
        switch (k)
        {case 1: vvod(a,n);break;
        case 2: stroka(a,n); break;
        case 3: zamena(a,n); break;
        case 4: cout<<"����� ������"<<endl; break;
        default: cout<<"������ ������ ���"<<endl;
    }
    if (k==4) break;
    } while(true);
     _getch();
}
void vvod(int a[], int n)
{
    cout<<"������� �������� �������"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void stroka(int a[], int n)
{
    for(int i=0;i<n;i++)
    printf("%i ", a[i]);
}
void zamena(int a[], int n)
{
    int min=200000;
    for (int i = 0; i < n; i++){
    if (a[i] < min);
    min = a[i];
    }
    for (int i = 0; i < n; i++){
    if (a[i] % 3 == 0)
        a[i]=min;
}
}
