//
//  main.cpp
//  laba 10 sem 2
//
//  Created by Andrey Scherbakov on 04.03.2024.
//

#include <iostream>
#include <string>
using namespace std;

string* pop_back(string* arr, int size, int a)
{
    string* newarr = new string[a];
    for(int i=0; i<a; i++)
    {
        newarr[i] = arr[i];
    }
    delete [] arr;
    return newarr;
}

int main()
{
    setlocale(LC_ALL, "RU");
    int size;
    cout<<"Введите количество строк: ";
    cin>>size;
    string *arr = new string [size];
    for(int i = 0; i < size; i++)
    {
        cout<<"Введите строку "<<i+1<<": ";
        cin>>arr[i];
    }
    
    int a;
    
    cout<<"Введите номер строки, с которой нужно удалить строки: ";
    cin>>a;
    a--;
    while(a<0 || a>size)
    {
        cout<<"Недопустимый номер, введите другой"<<endl;
        cin>>a;
    }
    arr = pop_back(arr, size, a);
    cout<<"Итоговый массив: "<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<"Строка "<< i+1<<": "<<arr[i]<<endl;
    }
    delete [] arr;
    return 0;
}
