/** to run the code from terminal please do the following 
 * 
 * cd C:\MGArbeit\Projects\CPlsPlsProjects\UdacityCh1LeK1
 *  g++ --version
 * PS C:\MGArbeit\Projects\CPlsPlsProjects\UdacityCh1LeK1>       g++ UdaCh1Lek1.cpp
 * PS C:\MGArbeit\Projects\CPlsPlsProjects\UdacityCh1LeK1>      ./a.exe

 *                  Hello World
*/

/* use # to include the iostream standard library before compiling the program */ 
#include <iostream>
/* Namespaces tell the compiler to use the cout function provided by the standard library 
and avoid other implementation of cout provided in other libraries  */ 
using std :: cout;

/* begin the program at main, take no arguments and return the exe status in an integer */
int main()
{
    /*shift the string onto cout to print it in the consol **/
    std::cout << "Hello world\n" << "\n"; /*shift a new line to the string*/
}

/**
 * #include <iostream>

The #include is a preprocessor command which is executed before the code is compiled. It searches for the iostream header file and pastes its contents into the program. iostream contains the declarations for the input/output stream objects.
using std::cout;

Namespaces are a way in C++ to group identifiers (names) together. They provide context for identifiers to avoid naming collisions. The std namespace is the namespace used for the standard library.
The using command adds std::cout to the global scope of the program. This way you can use cout in your code instead of having to write std::cout.
cout is an output stream you will use to send output to the notebook or to a terminal, if you are using one.
Note that the second two lines in the example end with a semicolon ;. Coding statements end with a semicolon in C++. The #include statement is a preprocessor command, so it doesn't need one.
cout << "Hello!" << "\n";

In this line, the code is using cout to send output to the notebook. The << operator is the stream insertion operator, and it writes what's on the right side of the operator to the left side. So in this case, "Message here" is written to the output stream cout.
*/