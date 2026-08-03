#include <iostream>
using namespace std;

int main() {
    int n = 3;
    cout << "Number\tSquare\tCube\n"
         << "------\t------\t----\n"
         << n << "\t" << (n * n) << "\t" << (n * n * n) << "\n";
    system("PAUSE");
    return 0;
}