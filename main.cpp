#include <iostream>
#include <windows.h>
#include <cstring>

int main()
{
    std::string n;
    std::cout<< "Enter second: "; std::cin>> n;
    for(int i=0; i< stoi(n); i++)
    {
        system("cls");
        std::cout<< stoi(n) - i;
        Sleep(1000);
    }
    system("cls");
    std::cout << "BOOOM!" << std::endl;
    std::cout << "Ok" << std::endl;
    return 0;
}
