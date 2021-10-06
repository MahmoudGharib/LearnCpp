#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    // Declare and initialize v using auto here.
    auto v={7, 8, 9, 10};
    auto i=0;

    while (i < 4)
    {
        cout << v[i];
        i++;
    }

return 0;
}
