#include <iostream>

using namespace std;


class IntCell // IntCell is class type 
{
    public: // can access any method by any class
        // IntCell() // Constructor 1, if no parameters are passed this will be initiated
        // {
        //     storedValue = 0; //default value
        // }

        // IntCell(int initialValue) // Constructor 2, if a parameter is passed with data type int, this will be initialized
        // {
        //     storedValue = initialValue;
        // }

        explicit IntCell(int initialValue = 0)
            : storedValue {initialValue} {}

        int read() const// returns the stored value
        // if we add const keyword, meaning that it is not changeable after the object has been constructed
        {
            return storedValue;
        }

        void write(int x) //chages the value stored in storedValue variable
        {
            storedValue = x;
        }

    private:
        int storedValue; //private variable can be accessed by only this class
        // By default, all members in the class are private
}; // dont forget to put semicolon at the end of class

void printOut(IntCell& intObj); //prototypes of functions has to be after the class

int main(void)
{
    IntCell intObj; // creating an object for the class
    // we can create multiple objects for the same class
    // this object calls the constructor 1 as we are not passing any parameter
    printOut(intObj); // calls the printOut function
    intObj.write(77); //modifying the value stored using write function
    printOut(intObj);

    IntCell intObj2(69); // this object calls constructor 2, as we are passing a int parameter
    printOut(intObj2);
    intObj2.write(29);
    printOut(intObj2);
}

void printOut(IntCell& intObj) // passed by reference, so any change we make will affect the original object too
// we can also pass by value, any change will not affect the original object
{
    cout << intObj.read() << endl;
    // intObj.write(52);
}

// Line 3 illustrates the declaration of m. The * indicates that m is a pointer variable; it is allowed

/*m is uninitialized at this point. In C++, no such check is performed to verify that m is
assigned a value prior to being used (however, several vendors make products that do
additional checks, including this one). The use of uninitialized pointers typically crashes
programs, because they result in access of memory locations that do not exist. In general,
it is a good idea to provide an initial value, either by combining lines 3 and 5, or by
initializing m to the nullptr pointer

int main(void)
{
    // IntCell *m;
    IntCell *m = nullptr;
    m = new IntCell {0};
    m->write(5);
    cout <<"Cell contents are: " << m->read() << endl;
    delete m;
    return 0;
}

Assignment and comparison of pointer variables in C++ is based on the value of the pointer,
meaning the memory address that it stores. Thus two pointer variables are equal if they
point at the same object. If they point at different objects, the pointer variables are not
equal, even if the objects being pointed at are themselves equal. If lhs and rhs are pointer
variables (of compatible types), then lhs=rhs makes lhs point at the same object that rhs
points at */

// Data member is a pointer, Default Big Five wont work, they has be to implemented in the class

// class IntCell
// {
//     public:
//         explicit IntCell(int initialValue = 0)  // Constructor
//         {
//             storedValue = new int { initialValue };
//         }

//         ~IntCell() // Deconstructor
//         {
//             delete storedValue;
//         }

//         IntCell (const IntCell & rhs) // Copy Constructor
//         {
//             storedValue = new int{*rhs.storedValue};
//         }

//         IntCell (IntCell && rhs): storedValue{rhs.storedValue} // Move constructor
//         {
//             rhs.storedValue = nullptr;
//         }

//         IntCell & operator= (const IntCell & rhs) // Copy Assignment Operator
//         {
//             if(this != &rhs)
//             {
//                 *storedValue = *rhs.storedValue;
//                 return *this;
//             }
//         }

//         IntCell & operator= (IntCell && rhs) // Move Assignement Operator
//         {
//             swap(storedValue, rhs.storedValue);
//             return *this;
//         }

//         int read() const
//         {
//             return *storedValue;
//         }

//         void write(int x)
//         {
//             *storedValue = x;
//         }

//     private:
//         int *storedValue;
// };