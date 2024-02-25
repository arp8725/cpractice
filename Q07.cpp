// +,-,*,/

// #include<iostream>

// class Sample
// {
//     int x;

//     public:
//     // void input(int a)
//     // {
//     //     x=a;
//     // }
//     void input()
//     {
//         std::cin>>x;
//     }

//     void output()
//     {
//         std::cout<<x;
//     }

//     friend Sample operator *(Sample &s1, Sample &s2);
// };

// Sample operator *(Sample &s1, Sample &s2)
// {
//     Sample temp;
//     temp.x = s1.x * s2.x;
//     return temp;
// }

// int main()
// {
//     Sample obj1,obj2,obj3;
//     obj1.input();
//     obj2.input();

//     obj3 = obj1*obj2;

//     obj3.output();
// }



//Addition

// #include<iostream>

// class AddSample
// {
//     int x;

//     public:
//     void input()
//     {
//         std::cin>>x;
//     }
//     void output()
//     {
//         std::cout<<x;
//     }

//     friend AddSample operator + (AddSample &A1, AddSample &A2);

// };

// AddSample operator + (AddSample &A1, AddSample &A2)
// {
//     AddSample temp;
//     temp.x = A1.x + A2.x;
//     return temp;
// }

// int main()
// {
//     AddSample obj1,obj2,obj3;
//     std::cout<<"Enter the numbers : ";
//     obj1.input();
//     obj2.input();

//     obj3 = obj1 + obj2;

//     std::cout<<"Sum: ";
//     obj3.output();
// }


// Substraction

#include <iostream>
class SubSample
{
    int x;

    public:
    void input()
    {
        std::cin>>x;
    }
    void outptu()
    {
        std::cout<<x;
    }

    friend SubSample operator - (SubSample &s1, SubSample &s2);

};

SubSample operator -(SubSample &s1,SubSample &s2)
{
    SubSample temp;
    temp.x = s1.x - s2.x;
    return temp;
}

int main()
{

    SubSample obj1,obj2,obj3;
    obj1.input();
    obj2.input();

    obj3 = obj1 - obj2;

    obj3.outptu();
    

    return 0;
}