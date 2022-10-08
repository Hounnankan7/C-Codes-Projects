#include "bankLib.hpp"
#include<iostream>
#include<fstream>
#include <sstream>
#include <string>
#include <filesystem>
#include <list>
#include <random>
#include <ctime>


using namespace std;
using std::u16string;

MyACCOUNT::MyACCOUNT(){
    account_lastname = "";
    account_firstname = "";
    account_number = 0;
    account_password = "";
    account_balance = 0;
}

MyACCOUNT::MyACCOUNT(string lastname, string firstname, int number, string password, float balance){ //Constructeur de la classe MyACCOUNT
    this->account_lastname = lastname;
    this->account_firstname = firstname;
    this->account_number = number;
    this->account_password = password;
    this->account_balance = balance;
}

MyACCOUNT MyACCOUNT::createAccount(string lastname, string firstname, int number, string password, int balance, MyACCOUNT Compte){ // Fonction de creation de compte
    number = 0;
    std::cout << "Pour finaliser la création de votre compte, nous avons besoins." << endl;
    std::cout << "Un nom : ";
    std::cin >> lastname;
    std::cout << "Un prenom : ";
    std::cin >> firstname;
    std::cout << "Choisir votre mot de passe à 4 chiffres : ";
    std::cin >> password;
    std::cout << "Vous ouvrez avec un montant de départ de : ";
    std::cin >> balance;

    Compte.account_lastname = lastname;
    Compte.account_firstname = firstname;
    Compte.account_number = number;
    Compte.account_password = password;
    Compte.account_balance = balance;

    std::cout << "Votre compte a été créer.";

    return Compte;
}


void MyACCOUNT::deleteAccount(){ // Fonction de cloture de compte

}

void MyACCOUNT::viewAccount(){ // Fonction affichage du compte

}

int MyACCOUNT::addMoney(float balance, float toAdd){ // Fonction d'ajout d'argent
    balance = balance + toAdd;
    std::cout << "Vous-avez ajouté : " << toAdd << "Euro";
    return balance;
}

int MyACCOUNT::substractMoney(float balance, float toSubstract){ // Fonction retrait d'argent
    if(balance<=0){
        std::cout << "Votre compte est vide !" << endl;
        return balance;
    }
    else if(balance < toSubstract) {
        std::cout << "Votre compte vaut : " << balance << "Euro" << endl
        << "Vos capacité de retrait son insuffisante." << endl;
        return balance;
    }
    else {
        balance = balance - toSubstract;
        std::cout << "Vous avez retiré : " << toSubstract << "Euro" << endl;
        return balance;
    }
}



int main () // Fonction principale du programme
{
    int choix; // Var pour choix de l'action à réalisée

    string lastname;
    string firstname;
    int number = 50;
    int balance;
    string password;

    MyACCOUNT A;
    MyACCOUNT C;

    string myText, textWelcome;
    bool isPresent;

    ifstream WelcomeFile("welcome.txt");
    textWelcome = string((std::istreambuf_iterator<char>(WelcomeFile)), std::istreambuf_iterator<char>());
    std::cout << textWelcome << endl;
    std::cout << "Action a realisee : ";
    std::cin >> choix;

    switch (choix)
    {
    case 1:
        std::cout << "yO";
        break;
    case 2:
        std::cout << "yI";
        break;
    case 3:
        std::cout << "yU";
        break;
    case 4:
        std::cout << "yy";
        break;
    case 5:
        std::cout << "ya";
        break;
    case 6:
        return 0;
        break;
    }




    // Ouverture du fichier .txt des comptes existants
    //ifstream MyReadFile("Comptes/NumeroDeCompte.txt");

   // myText = string((std::istreambuf_iterator<char>(MyReadFile)), std::istreambuf_iterator<char>());

    /*  C = A.createAccount(lastname, firstname, number, password, balance, C);
            std::cout << "Mr/Mme " << C.account_lastname << " " << C.account_firstname << " avec un montant de : " << C.account_balance << " Euro." << std::endl << "Votre numéro de compte : " << C.account_number << std::endl << "Votre mot de passe est le : " << C.account_password;

    */





    /*

    //Affichage infos de création de compte

    */


    return 0;
}
