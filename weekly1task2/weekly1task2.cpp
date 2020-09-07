

#include <iostream>
#include <string>
#include <conio.h>

int age = 0;
std::string name = "";
char c;

int main()
{
    std::cout << "What's your name?: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << "and your age?: ";
    std::cin >> age;
    std::cout << "do you drink coffee?(y/n): "; 
    std::cin >> c;
    std::cout << "Your name is " << name << ". You are " << age << " years old. ";

    if (c == 'y') {
        std::cout << "It seems you like coffee.\n";
    }
    if (c == 'n') {
        std::cout << "Oh, you don't like coffee\n";
    }
    system("pause");
    return 0;
}



