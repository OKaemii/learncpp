#include <iostream>

int main()
{
    // print to console
    std::cout << "I am a streamer\n";
    std::cout << 42 << '\n';

    // define x
    int x{21}; // direct initialization
    std::cout << x << '\n';

    std::cout << "Who " << "am " << "I?" << std::endl;

    int a {}; // to hold user data
    std::cin >> a;
    std::cout << "collected: " << a << '\n';

    return 0;
}