// #include<iostream>

// class Complex
// {
//     int real;
//     int imag;

//     public:
//     void input()
//     {
//         std::cout<<"\nEnter the real and imag part: ";
//         std::cin>>real;
//         std::cin>>imag;
//     }

//     void output()
//     {
//         std::cout<<"\nOutput: "<<real<<" + "<<imag<<"i";
//     }

//     Complex operator +(Complex &obj)
//     {
//         Complex temp;
//         temp.real = real + obj.real;
//         temp.imag = imag + obj.imag;
//         return temp;
//     }
// };


// int main()
// {
//     Complex c1,c2,c3;
//     std::cout<<"\nEnter the first complex number: ";
//     c1.input();

//     std::cout<<"\nEnter the second complex number: ";
//     c2.input();

//     c3= c1+c2;

//     c3.output();
    

// }



#include<iostream>

class Complex
{
    int real;
    int imag;

    public:
    void input()
    {
        std::cout<<"\nEnter the real and imag part: ";
        std::cin>>real;
        std::cin>>imag;
    }

    void output()
    {
        std::cout<<"\nOutput: "<<real<<" + "<<imag<<"i";
    }

    friend Complex operator +(Complex &c1, Complex &c2);

};

Complex operator+(Complex &c1, Complex &c2)
{
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;
        return temp;
}

int main()
{
    Complex c1,c2,c3;
    std::cout<<"\nEnter the first complex number: ";
    c1.input();

    std::cout<<"\nEnter the second complex number: ";
    c2.input();

    c3= c1+c2;

    c3.output();
    

}