#include <iostream>

/*Можно описать функцию-член таким образом, что объект, для которого она вызывается, будет доступен ей только по чтению. Тот факт, что функция не будет
изменять объект, для которого она вызывается (т.е. this*), обозначается служебным словом const в конец списка параметров:*/
class X 
{
    int m;
    public:
    readme()const{return m;}
    writeme(int i) 
    {
        m=i;
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
/*Списки с такой общей структурой служат фундаментом списочных классов, описываемых в главе 8. Чтобы присоединить звено к списку, нужно изменить объекты,
на которые настроены указатели this, pre и suc. Все они имеют тип dlink, поэтому функция-член dlink::append() имеет к ним доступ. Защищаемой единицей в C++
является класс, а не отдельный объект класса*/
int main()
{

    std::cout<<"Hello"<<std::endl;
}