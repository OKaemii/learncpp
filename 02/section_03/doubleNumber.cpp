#include <iostream>

int doubleNumber(int num)
{
    return num * 2;
}

int main()
{
    int x {0};
    std::cin >> x;
    std::cout << doubleNumber(x) << std::endl;
}