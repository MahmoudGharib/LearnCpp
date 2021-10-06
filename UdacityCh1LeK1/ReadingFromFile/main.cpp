/**
to read from a file do the following

include fstream and string
create objects of fstream and string
open the file
use getline to read each line into the string
get line will stop reading when there is nothing to read from the file

        Enjoy :)
**/


#include <iostream>
#include <fstream>
#include <string>


using namespace std;



int main()
{
    std::ifstream Myfile;   // create an object that reads files (stream object)

    Myfile.open("C:/MGTraining/C++/readingFromfile.txt");

    if (Myfile) /** file created correctly **/
    {
         cout << "File created, congrats!" << endl;
         /** create a string object to read from the file into the string*/
         std::string myLine;

         /**read each line and store in line then print that line */
         while( getline(Myfile, myLine) )
         {
             cout << myLine << endl;
         }

    }
    cout << "Hello world!" << endl;
    return 0;
}
