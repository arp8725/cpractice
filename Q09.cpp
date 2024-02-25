//ARRYA SUBSCRIPT []

// #include <iostream>

// class Arraydemo
// {
//     int a[10];

// public:
//     void inputdata(int index, int value)
//     {
//         a[index] = value;
//     }

//     int operator[](int index)
//     {
//         return (a[index]);
//     }
// };
// int main()
// {
//     Arraydemo obj;
//     for (int i = 0; i < 10; i++)
//         obj.inputdata(i, 10 * (i + 1));
//     for (int i = 0; i < 10; i++)
//     {
//         std::cout << obj[i] << " ";
//     }
//     return 0;
// }



// #include<iostream>

// class demoArray
// {
//     int a[10];
//     public:
//     void inputdata(int index, int value)
//     {
//         a[index]=value;
//     }

//     int operator[](int index)
//     {
//         return(a[index]);
//     }

// };

// int main()
// {

//     demoArray obj;
//     for(int i=0;i<10;i++)
//     obj.inputdata(i,10*(i+1));

//     for(int i=0;i<10;i++)
//     {
//         std::cout<<obj[i]<<" ";
//     }
//     return 0;
// }



// EXAMPLE -2

// #include<iostream>

// class marks
// {
//     int subjects[3];
//     public:
//     marks(int sub1, int sub2, int sub3)
//     {
//         subjects[0] = sub1;
//         subjects[1] = sub2;
//         subjects[2] = sub3;
//     }

//     int operator [](int index)
//     {
//         return subjects[index];
//     }
// };

// int main()
// {
//     marks mobj(99,88,77);
//     std::cout<<mobj[0]<<" ";
//     std::cout<<mobj[1]<<" ";
//     std::cout<<mobj[2]<<" ";
// }



//Example -3

#include<iostream>

const int maxlimit=10;
class Arraydemo
{
    int a[maxlimit];
    public:
    Arraydemo()
    {
        for(int i=0;i<maxlimit;i++)
        {
            a[i]= i;
        }
    }

    int operator [](int index)
    {
        if(index>maxlimit)
        {
            std::cout<<"Index out of Bound...\n";
            return a[0];
        }
    else
    {
        return a[index];
    }
    }

};

int main()
{
    Arraydemo obj;
    std::cout<<obj[20];
}