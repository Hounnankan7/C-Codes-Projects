#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>    // pour tolower et toupper
#include <algorithm> // pour transform

using namespace std;

bool containsOnlyLetters(std::string const &str) {
    return str.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") ==
        std::string::npos;
}

int main ()

{
    std::string firstname;
    std::string lastname;
    std::cin >> firstname;
    std::cin >> lastname;
    std::string ch;
    std::string ch_firstname;

    if (containsOnlyLetters(firstname)==true && containsOnlyLetters(lastname)==true)
    {
        //Que des lettres
        transform(lastname.begin(), lastname.end(), lastname.begin(), ::tolower);
        transform(firstname.begin(), firstname.end(), firstname.begin(), ::tolower);

        std::cout << lastname.substr(0,7) << firstname.substr(0,1) <<std::endl;

        return 0;
    }
    else if (containsOnlyLetters(firstname)==false && containsOnlyLetters(lastname)==true)
    {
        std::cout << "\"" << firstname << "\"" <<" is not a valid firstname" << std::endl;
        return 0;
    }
     else if (containsOnlyLetters(firstname)==true && containsOnlyLetters(lastname)==false)
    {
        std::cout << "\"" << lastname << "\"" << " is not a valid lastname" << std::endl;
        return 0;
    }


    return 0;
}
