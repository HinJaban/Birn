#include <iostream>



class X 
{
    int m;
    public:
    int readm() 
    {
        return m;
    }
};
/*В функции-члене можно непосредственно использовать имена членов того объекта, для которого она была вызвана*/
void f(X aa, X bb)
{
    /*При первом вызове readm() m обозначает aa.m, а при втором - bb.m*/
    int a = aa.readm(); 
    int b = bb.readm();
    //...
}
int main()
{

    std::cout<<"Hello"<<std::endl;
}