#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main ()

{
    int number;
    std::cin >> number;
    for (int i = 1; i < 11; i++) {

        cout << left <<setw(5)<< i <<" x "<< left <<setw(5)<< number << " = " << left <<setw(5)<< number*i<< std::endl;
    }


    return 0;
}
