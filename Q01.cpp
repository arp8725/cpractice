// #include<iostream>
// class Increment
// {
//     int val;
//     public:
//     Increment()
//     {
//         val =10;
//     }

//     void operator ++()
//     {
//         val = val +5;
//         val++;
//     }

//     void display()
//     {
//         std::cout<<"Value is: "<<val;
//     }
// };


// int main()
// {
//     Increment inc;
//     ++inc;
//     inc.display();
// }


#include<iostream>
class Increment
{
    int val;
    public:
    Increment()
    {
        val =10;
    }

    void display()
    {
        std::cout<<"Value is: "<<val;
    }

    friend void operator ++(Increment &iobj);

};

void operator ++(Increment &iobj)
{
    iobj.val++;
}

int main()
{
    Increment inc;
    ++inc;
    inc.display();
}