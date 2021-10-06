/**
    helloBrothers.cpp

    
**/



/** included lib    **/
#include <iostream>
#include <string>
#include <vector>


/** code    **/
int main ()
{

    std::vector<std::string> brothers{"Dodo", "Mero" ,"tota"};

    for (std::string const& brother : brothers)
    {
        std::cout << "Hello " <<brother<< "!\n";
    }


    return 0;
}


