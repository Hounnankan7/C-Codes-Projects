#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<fstream>
#include <sstream>
#include <string>
#include <filesystem>
#include <windows.h>
#include <conio.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

//Variable du tableau de jeu
int width_table = 20;
int height_table = 50;
int x, y, fruitx, fruity, flag;
int gameover;
int score;
int choix; // Var pour choix de l'action à réalisée


void DRAW_TABLE(int width, int height){ //Fonction pour dessin du cadre
  int i, j;

  for(i=0; i < width; i++){
    for(j=0; j < height; j++){
        if(i == 0 || i == width - 1 || j == 0 || j == height - 1){
            std::cout << "#";
        }
        else{
            if (i == x && j == y){
                std::cout << "0";
            }
            else if (i == fruitx && j == fruity){
                std::cout << "*";
            }
            else {
               std::cout << " ";
            }
        }
    }
    std::cout << std::endl;
  }
  // Print the score after the
  // game ends
  printf("score = %d", score);
  printf("\n");
  printf("press X to quit the game");
}

void FRUIT_GENERATION(){
    gameover = 0;
    //Stocker la taille de la zone de jeu
    x = width_table/2;
    y = height_table/2;

    label1:
        fruitx = rand() % 20;
        if (fruitx == 0){
            goto label1;
        }
    label2:
        fruity = rand() % 50;
        if (fruity == 0){
            goto label2;
        }
    score = 0;
}

void KeyboardInput() {
  if (kbhit()) {
    switch (getch()) {
    case 'q':
      flag = 1;
      break;
    case 's':
      flag = 2;
      break;
    case 'd':
      flag = 3;
      break;
    case 'z':
      flag = 4;
      break;
    case 'x':
      gameover = 1;
      break;
    }
  }
}

void GameLogic(){
  sleep(1);
  switch (flag) {
  case 1:
    y--;
    break;
  case 2:
    x++;
    break;
  case 3:
    y++;
    break;
  case 4:
    x--;
    break;
  default:
    break;
  }

  // If the game is over
  if (x < 0 || x > width_table || y < 0 || y > height_table){
    gameover = 1;
  }


  // If snake reaches the fruit
  // then update the score
  if (x == fruitx && y == fruity) {
    label3:
        fruitx = rand() % 20;
        if (fruitx == 0){
            goto label3;
        }

        // After eating the above fruit
        // generate new fruit
    label4:
        fruity = rand() % 50;
    if (fruity == 0){
        goto label4;
    }
    score += 10;
  }
}

void Main(string a) {
  int m, n;

  // Generate boundary
  FRUIT_GENERATION();

  // Until the game is over
  while (!gameover) {

    // Function Call
    system("cls");
    std::cout << a << endl;
    DRAW_TABLE(width_table, height_table);
    KeyboardInput();
    GameLogic();
  }
}

// Code principal
int main() {

  string textWelcome;
  string textRules;

  //Ouverture des fichiers .txt
  ifstream WelcomeFile("snake.txt");
  ifstream RulesFile("snake_rules.txt");

  //Récupération du contenu du fichier snake.txt dans un string pour affichage
  textWelcome = string((std::istreambuf_iterator<char>(WelcomeFile)), std::istreambuf_iterator<char>());
  textRules = string((std::istreambuf_iterator<char>(RulesFile)), std::istreambuf_iterator<char>());
  std::cout << textWelcome << endl;
  std::cout << "Action a realisee : ";
  std::cin >> choix;

    switch (choix)
    {
    case 1:
        Main(textRules);

        break;
    case 2:

        break;
    case 3:

        break;
    }

  return 0;
}
