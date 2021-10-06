#include <iostream>

using namespace std;

int main()
{
    int number;
    int squared;


    std::cout << "Enter an integer: " << endl;

    std::cin >> number; //>> called extraction operator from keyboard into number

    squared = number*number; //square the number, * multiply operator


    std::cout<< "the number you entered is "<<number<< std::endl;
    std::cout << "the square of the number you entered is: "<< squared << std::endl;
    // endl flushes the entire buffer use it



    return 0;
}
