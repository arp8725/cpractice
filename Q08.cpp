//  += OPERATOR

// #include<iostream>

// class demo
// {
//     int x;

//     public:
//     void input()
//     {
//         std::cin>>x;
//     }
//     void output()
//     {
//         std::cout<<"\n"<<x;
//     }

//     void operator +=(demo &obj)
//     {
//         x = x + obj.x;
//     }
// };

// int main()
// {
//     demo d1, d2;
//     d1.input();
//     d2.input();

//     d1+= d2;
//     d1.output();
    
//     d2.output();

//     return 0;
// }




//    -=


#include<iostream>

class demosub
{
    int a;
    public:
    void input()
    {
        std::cin>>a;
    }

    void output()
    {
        std::cout<<"\n"<<a;
    }

    void operator -=(demosub &obj)
    {
        a = a - obj.a;
    }

};

int main()
{
    demosub obj1, obj2;
    obj1.input();
    obj2.input();

    obj1 -= obj2;
    obj1.output();
    obj2.output();

    
    return 0;
}