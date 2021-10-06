
/**
#include <iostream>

using namespace std;    // using name space in this manner is bad practice

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
**/

#include <iostream> /** include input/output standard lib*/


int main ()
{
    /**
    *   std is a name space that contains the variable cout
    *   namespace like std are used to provide scope.
    *   this way we can have multiple cout variables under many different name spaces with different behavior

    *   std::cout (::) the colon operator is used to reference the variable to the name space
    */
    /**     << is called an insert operator in this case.
    *    A<<B insert B into A
    */
    std::cout << "Hello Dodo :) \n"; /**/

return 0;
}





