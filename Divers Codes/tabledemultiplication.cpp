#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main ()

{
    int number;
    std::cin >> number;
    for (int i = 1; i < 11; i++) {

        cout <<setw(5)<< i <<" x "<<setw(5)<< number << " = " <<setw(5)<< number*i<< std::endl;
    }


    return 0;
}
