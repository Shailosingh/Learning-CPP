#include <iostream>
#include <string>

int main()
{
    //Ask for name
    std::string username;
    std::cout << "What is your name?: ";
    std::getline(std::cin, username); /*Relies on "#include <string>" and is used to get whole line input.
                                      Simply using cin sees whitespace as end character to input*/

    //Say hi to the user
    std::cout << "Hello " << username << "!";
}