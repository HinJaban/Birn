#include <iostream>

struct date
{
    int month, day, year;
    void set(int,int,int);
    void get(int*,int*,int*);
    void next();
    void print();
};
date today;
date my_birthday;
void f()
{
    my_birthday.set(30,12,1950);
    today.set(18,1,1991);
    my_birthday.print();
    today.next();
}

int main()
{
    std::cout<<"Hello"<<std::endl;
}