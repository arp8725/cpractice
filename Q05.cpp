// Assignment operator

// #include <iostream>
// class integer
// {
//     int x,y;
//     public:
//     integer()
//     { };

//     integer(int X,int Y)
//     {
//         x=X;
//         y=Y;
//     }

//     void display()
//     {
//         std::cout<<"\nx= "<<x;
//         std::cout<<"\ny= "<<y;
//     }

//     void operator=(integer &iob)
//     {
//         x=iob.x;
//         y=iob.y;
//     }
// };

// int main()
// {
//     integer obj1(10,20);
//     integer obj2;

//     obj2=obj1;

//     obj1.display();
//     obj2.display();

// }



#include <iostream>

class Integer {
    int x, y;

public:
    Integer() {}

    Integer(int X, int Y) {
        x = X;
        y = Y;
    }

    void display() {
        std::cout << "\nx= " << x;
        std::cout << "\ny= " << y;
    }

    // Declaration of the friend function
    friend void assign(Integer &iob1, const Integer &iob2);
};

// Definition of the friend function
void assign(Integer &iob1, const Integer &iob2) {
    iob1.x = iob2.x;
    iob1.y = iob2.y;
}

int main() {
    Integer obj1(10, 20);
    Integer obj2(0, 0); // Initialize obj2 before using the assignment operator

    // Call the friend function to perform the assignment
    assign(obj2, obj1);

    obj1.display();
    obj2.display();

    return 0;
}
