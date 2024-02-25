// Increment and dec operator overloading.

// #include <iostream>

// class weight {
// private:
//     int kg;

// public:
//     weight() {
//         kg = 10;
//     }
//     weight(int x) {
//         kg = x;
//     }

//     void display() {
//         std::cout << "Weight in kg: " << kg << std::endl;
//     }

//     // Pre-increment operator (++w)
//     void operator++() {
//         ++kg;
//     }

//     // Post-increment operator (w++)
//     void operator++(int) {
//         kg++;
//     }

//     // Pre-decrement operator (--w)
//     void operator--() {
//         --kg;
//     }

//     // Post-decrement operator (w--)
//     void operator--(int) {
//         kg--;
//     }
// };

// int main() {
//     weight w;
//     w.display();

//     ++w;
//     w.display();

//     w++;
//     w.display();

//     --w;
//     w.display();

//     w--;
//     w.display();

//     return 0;
// }





// using friend function

// #include<iostream>

// class weight
// {
//     int kg;

//     public:
//     weight()
//     {
//         kg =0;
//     }
//     weight(int x)
//     {
//         kg = x;
//     }

//     void dsiplay()
//     {
//         std:: cout<<"Weight in kg: "<<kg<<std::endl;
//     }

//     friend void operator ++(weight &w);
//     friend void operator ++(weight &w, int);
//     friend void operator --(weight &w);
//     friend void operator --(weight &w, int);

// };

// void operator ++(weight &w)
// {
//     ++w.kg;
// }

// void operator ++(weight &w,int)
// {
//     w.kg++;
// }

// void operator --(weight &w)
// {
//     --w.kg;
// }

// void operator --(weight &w,int)
// {
//     w.kg--;
// }


// int main()
// {
//     weight w;
//     w.dsiplay();

//     ++w;
//     w.dsiplay();

//     w++;
//     w.dsiplay();

//     --w;
//     w.dsiplay();

//     w--;
//     w.dsiplay();
// }




#include <iostream>

class weight {
private:
    int kg;

public:
    weight() {
        kg = 10;
    }
    weight(int x) {
        kg = x;
    }

    void display() {
        std::cout << "Weight in kg: " << kg << std::endl;
    }

    // Pre-increment operator (++w)
    weight operator++() 
    {
        weight temp;
        temp.kg = ++kg;
        return temp;
    }

};

int main() {
    weight w1, w2;

    w2= ++w1;
    w2.display();

    return 0;
}