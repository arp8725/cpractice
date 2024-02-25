//+ Operator

// #include<iostream>

// class demo
// {
//     int a;
//     public:

//     void input()
//     {
//         std::cout<<"Enter a number: ";
//         std::cin>>a;
//     }

//     void display()
//     {
//         std::cout<<"value: "<<a;
//     }

//     demo operator + (demo &obj)
//     {
//         demo temp;
//         temp.a = a+ obj.a;
//         return temp;
//     }
// };

// int main()
// {
//     demo obj1,obj2,obj3;
//     obj1.input();
//     obj2.input();

//     obj3 = obj1+obj2;
//     obj3.display();
// }



#include<iostream>

class demo
{
    int a;
    public:

    void input()
    {
        std::cout<<"Enter a number: ";
        std::cin>>a;
    }

    void display()
    {
        std::cout<<"value: "<<a;
    }

    friend demo operator + (demo &obj1, demo &obj2);

};

demo operator + (demo &obj1, demo &obj2)
    {
        demo temp;
        temp.a = obj1.a+ obj2.a;
        return temp;
    }

int main()
{
    demo obj1,obj2,obj3;
    obj1.input();
    obj2.input();

    obj3 = obj1+obj2;
    obj3.display();
}