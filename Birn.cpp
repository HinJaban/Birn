#include <iostream>


/*Считается, что в каждой функции-члене класса X указатель this описан неявно как: X *const this; и инициализируется, чтобы указывать
на объект, для которого функция-член вызывалась. Этот указатель нельзя изменять, поскольку он постоянный (*const). Явно описать его тоже нельзя, т.к. this - это служебное
слово. Можно дать эквивалентное описание класса X: */
class X 
{
    

    int m;
    public:
    int readm() 
    {
        return this->m;
    }
};

/*Для обращения к членам использовать this излишне. В основном this используется в функциях-членах, непосредственно работающих с указателями.
Типичный пример - функция, которая вставляет элемент в список с двойной связью:*/
class dlink 
{
    dlink* pre; //указатель на предыдущий элемент
    dlink* suc; //указатель на следующий элемент
    public:
    void append(dlink*);
    //...
};
void dlink::append(dlink *p)
{
    p->suc = suc; //т.е. p->suc = this->suc
    p->pre = this;//явное использование "this"
    suc->pre = p;//т.е. this->suc->pre = p
    suc = p;//т.е. this->suc = p
}
dlink* list_head;
void f(dlink *a, dlink *b)
{
    //...
    list_head->append(a);
    list_head->append(b);
}







int main()
{

    std::cout<<"Hello"<<std::endl;
}