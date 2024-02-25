// ( -> ) Arrow operator overloading

#include <iostream>

class demo
{
    int a;

public:
    demo()
    {
       a=10;
    }

    void display()
    {
        std::cout << "\na=" <<a;
    }

    
    demo* operator->()
    {
        return this;
    }
};
int main()
{
    demo obj;
    obj.display();
    obj->display();
}