/**
using input string stream
**/


#include <iostream>
#include <sstream>
#include <string>


using namespace std;
using std::istringstream;
using std::string;
using std::cout;

int main()
{
    string a("1 2 3 4");
    string b("5 6 7 8");
    string c("9, 10, 11");
    int n;
    char x;

    istringstream myStream(a); /** create an input string stream object **/

    /** using myStram as a boolean to check if the read was a success or a failure */
    while (myStream)
    {
        myStream >> n; /* extract the element read into n*/
        if(myStream) /** check if the extraction got a character and not a white space or end of text */
        {
            cout << "string is: " << n << "\n";
        }
        else
        {
            cout << " extracting stream failed "<< "\n";
        }

    }
    cout << "End of while loop!" << endl;


    /** reading another stream  **/
    myStream.clear();   /** clear the buffer of myStream*/
    myStream.str(b);       /** read the string a into the input stream **/

    while (myStream >> n)/** extract the first character and save it as an integer **/
    {
        cout << "string B is: " << n << "\n";

    }
    /*cout << n << "\n";*/


    /** reading  stream c **/
    myStream.clear();   /** clear the buffer of myStream*/
    myStream.str(c);       /** read the string a into the input stream **/

    while ((myStream >> n))/** extract the integer or character and save it as an integer **/
    {
       if((myStream))
       {
           if(myStream>>x)
           {
             cout << "string C is: " << n << x << "\n";
           }
           else
           {
             cout << "string C is: " << n << "\n";

           }
       }
    }
    cout << "End of while loop!" << endl;



    cout << "Hello world!" << endl;
    return 0;
}
