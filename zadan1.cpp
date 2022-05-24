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
    cout<<"введите количество элементов массива"; cin>>n;
    do
        {cout<<"1. Ввод массива целых чисел."<<endl;
        cout<<"2. Вывод массива в строку."<<endl;
        cout<<"3. Найти второй по порядку минимальный элемент. Заменить все элементы, кратные трем, на этот элемент."<<endl;
        cout<<"4. Конец работы"<<endl;
        cout<<"Укажите номер пункта меню"; cin>>k;
        switch (k)
        {case 1: vvod(a,n);break;
        case 2: stroka(a,n); break;
        case 3: zamena(a,n); break;
        case 4: cout<<"Конец работы"<<endl; break;
        default: cout<<"Такого пункта нет"<<endl;
    }
    if (k==4) break;
    } while(true);
     _getch();
}
void vvod(int a[], int n)
{
    cout<<"Введите элементы массива"<<endl;
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
