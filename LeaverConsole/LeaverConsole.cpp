#include <iostream> 
#include <string> 
#include "Leaver.h"

int main()
{
    setlocale(LC_ALL, "rus");
    Leaver leaver;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    leaver.leave(name);

}