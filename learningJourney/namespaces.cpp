#include <iostream>
#include <string>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

void funcOne() {
    using namespace first;
    std::cout << x; // will print 1
}

void funcTwo() {
    using namespace second;
    std::cout << x; // will print 2
}

int main() {
    using namespace std;
    string name = "Hamza";
    cout << "The name is: " << name << '\n';

    funcOne();
    cout << '\n'; // calling both functions in the main function yeyy
    funcTwo();

    return 0;
}