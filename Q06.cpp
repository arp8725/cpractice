//insertion and exerction operation i.e: i stream and ostream

// #include<iostream>
// #include <cstring>


// class Person
// {
//     int age;
//     std::string name;
//     public:
//     Person()
//     {
//         age=0;
//         name="";
//     }
//     friend std::ostream &operator <<(std::ostream &out, Person &P);
//     friend std::istream & operator >>(std::istream &in, Person &P);
// };

// std::ostream &operator <<(std::ostream &out, Person &P)
// {
//     out<<"\nHello bhai";
//     out<<"\nMy name is: "<<P.name<<"& Age is : "<<P.age;
//     return out;
// }

// std::istream &operator >>(std::istream &in, Person &P)
// {
//     in>>P.name>>P.age;
//     return in;
// }

// int main()
// {
//     Person pobj;
//     std::cin >> pobj; // Added std:: before cin
//     std::cout << pobj;
//     return 0;
// }






#include<iostream>
#include<cstring>

class Student
{
    int rollNo;
    char name[20];

    public:
    Student()
    {
        rollNo =0;
        strcpy(name,"");
    }

    friend std::ostream &operator <<(std::ostream &out,Student &s);
    friend std::istream &operator >>(std::istream &in, Student &s);

};

std::ostream &operator <<(std::ostream &out, Student &s)
{
    out<<"Hello Students..";
    out<<"\nStudent Name is: "<<s.name<<" & rollno is: "<<s.rollNo;
    return out;
}
std::istream &operator >>(std::istream &in, Student &s)
{
    in>>s.name>>s.rollNo;
    return in;
}

int main()
{
    Student s1;
    std::cout<<"Enter Student Name and Roll No: ";
    std::cin>>s1;
    std::cout<<s1;
}