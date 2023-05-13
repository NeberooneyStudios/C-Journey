#include <iostream>

int main()
{
    double num1;
    double num2;
    double answer;
    char notation;

    std::cout << "Welcome to neberooney's Simple Calculator!\n";
    std::cout << "Please input your first Number:";
    std::cin >> num1;
    std::cout << "Please input your second Number:";
    std::cin >> num2;
    std::cout << "Pick a notation from the given list (+, -, *, /)\n";
    std::cout << "Enter here:";
    std::cin >> notation;
    if (notation == '*' || notation == 'x')
    {
        answer = num1 * num2;
    }
    else if (notation == '/')
    {
        answer = num1 / num2;
    }
    else if (notation == '+')
    {
        answer = num1 + num2;
    }
    else if (notation == '-')
    {
        answer = num1 - num2;
    }
    else
    {
        std::cout << "This is an incorrect notation!";
    }
    std::cout << "Your answer is: " << answer << "\n";
    std::cout << "Thank you for using my calculator!";
}