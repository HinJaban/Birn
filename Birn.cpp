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

int main()
{
    std::cout<<"Hello"<<std::endl;
}