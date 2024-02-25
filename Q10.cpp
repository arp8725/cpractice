// Function call operator overloading---()

#include<iostream>

class demo
{
    int a,b,c;
    public:
    demo()
    {
        a=0;
        b=0;
        c=0;
    }
    demo(int x,int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }



    void operator ()(int p,int q,int r)
    {
        std::cout<<"\nOperator Overloading";
        a=p;
        b=q;
        c=r;
    }

        void display()
    {
        std::cout<<"\na="<<a<<"\nb="<<b<<"\nc="<<c<<"\n";
    }
    
};

int main()
{
    demo obj1;
    obj1.display();
    demo obj2(10,20,30);
    obj2.display();

    demo obj3; // so there a default constructor is created where values of a,b,c are assigned to be 0
    obj3(100,200,300); // this line calls the operator overloading and update the values of a,b,c to 100,200,300
    obj3.display();
}