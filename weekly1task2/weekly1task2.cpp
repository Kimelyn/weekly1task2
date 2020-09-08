

#include <iostream>
#include <string>
#include <conio.h>

int age = 0;
std::string name = "";
std::string answer = "";


int main()
{
    std::cin.ignore();
    std::cout << "What's your name?: ";
    std::getline(std::cin, name);
    std::cout << "and your age?: ";
    std::cin >> age;
    std::cout << "do you drink coffee?: "; 
    std::cin >> answer;
    std::cout << "Your name is " << name << ". You are " << age << " years old. ";

    if (answer == "Yes" || answer == "yes" || answer == "y" || answer == "Y") {
        std::cout << "It sems you like coffee.\n";
    }
    if (answer == "No" || answer == "N" || answer == "no" || answer == "n") {
        std::cout << "Oh, you don't like coffee.\n";
    }
    system("pause");
    return 0;
}



