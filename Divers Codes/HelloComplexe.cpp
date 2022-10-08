#include <iostream>
#include <string>

using namespace std;

int main ()

{
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Bonjour " <<name<< endl;

    return 0;
}
