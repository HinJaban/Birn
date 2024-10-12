#include <iostream>

struct date
{
    int month, day, year;
};
date today;
void set_date(date*,int,int,int);
void next_date(date*);
void print_date(const date*);
int main()
{
    std::cout<<"Hello"<<std::endl;
}