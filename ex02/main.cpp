
#include <iostream>
#include <string>

//hi this is brain exercise

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address of the string: " << &str << std::endl;
    std::cout << "Address of the string using pointer: " << stringPTR << std::endl;
    std::cout << "Address of the string using reference: " << &stringREF << std::endl;
    std::cout << "value of str: " << str << std::endl;
    std::cout << "value of str using pointer: " << *stringPTR << std::endl;
    std::cout << "value of str using reference: " << stringREF << std::endl;
    return 0;
}