#include <iostream>

using namespace std;


class IntCell // IntCell is class type 
{
    public: // can access any method by any class
        IntCell() // Constructor 1, if no parameters are passed this will be initiated
        {
            storedValue = 0; //default value
        }

        IntCell(int initialValue) // Constructor 2, if a parameter is passed with data type int, this will be initialized
        {
            storedValue = initialValue;
        }

        int read() // returns the stored value
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