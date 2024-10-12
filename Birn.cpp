#include <iostream>

struct date
{
    int month, day, year;
    /*функции-члены структуры; их можно вызвать только через переменные соответствующего типа...*/
    void set(int,int,int); 
    void get(int*,int*,int*);
    void next();
    void print();
};
date today;
date my_birthday;
void f()
{
    my_birthday.set(30,12,1950);//...используя стандартную запись обращения к члену структуры через точку
    today.set(18,1,1991);
    my_birthday.print();
    today.next();
}
void date::next() //так как разные структуры могут иметь функции-члены с одинаковыми именами, при определении функции-члена нужно указывать имя структуры
{
    if(++day>28)
    {
        //здесь сложный вариант
    }
}
int main()
{
    
    std::cout<<"Hello"<<std::endl;
}