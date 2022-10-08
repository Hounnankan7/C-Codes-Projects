#include<iostream>

using namespace std;

int main(){

    int operatorChoice;
    int number1, number2, result;

    std::cout << "Quelles operations voulez-vous faire ?"<<std::endl;
    std::cout << "1 - Somme"<<std::endl<< "2 - Soustraction"<<std::endl<< "3 - Multiplication"<<std::endl<< "4 - Division"<<std::endl;
    std::cin >> operatorChoice;

    if(operatorChoice == 1){
        std::cout << "Entrer les valeurs de travail : "<<std::endl;
        std::cout << "Valeur 1 : ";
        std::cin >> number1;
        std::cout << "Valeur 2 : ";
        std::cin >> number2;
        result = number1 + number2;
        std::cout << "Resultat : " << result;

    }
    else if(operatorChoice == 2){
        std::cout << "Entrer les valeurs de travail : "<<std::endl;
        std::cout << "Valeur 1 : ";
        std::cin >> number1;
        std::cout << "Valeur 2 : ";
        std::cin >> number2;
        result = number1 - number2;
        std::cout << "Resultat : " << result;

    }
    else if(operatorChoice == 3){
        std::cout << "Entrer les valeurs de travail : "<<std::endl;
        std::cout << "Valeur 1 : ";
        std::cin >> number1;
        std::cout << "Valeur 2 : ";
        std::cin >> number2;
        result = number1 * number2;
        std::cout << "Resultat : " << result;

    }
    else if(operatorChoice == 4){
        std::cout << "Entrer les valeurs de travail : "<<std::endl;
        std::cout << "Valeur 1 : ";
        std::cin >> number1;
        std::cout << "Valeur 2 : ";
        std::cin >> number2;
        result = number1 / number2;
        std::cout << "Resultat : " << result;

    }

    return 0;
}
