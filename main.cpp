#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Addition of " << num1 << " and " << num2 << " is: " << add(num1, num2) << std::endl;
    return 0;
}
