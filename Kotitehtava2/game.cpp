#include "game.h"


Game::Game(int maxNum)
{
    maxNumber = maxNum;
    cout << "terve taalta Game " << "maxNumber on " << maxNumber << endl;
    srand(time(NULL));
    randomNumber= rand() % maxNumber;
}

Game::~Game()
{
    cout << "~Game on loppunut" << endl;

}

void Game::play()
{
    numOfGuesses = 0;
    cout << "game start" << endl;

    cout << "maxNumber on " << maxNumber << endl;

    while (playerGuess != randomNumber){
    numOfGuesses++;
    cout << "yrita arvata oikea numero" << endl;
    cin >> playerGuess;
    if(playerGuess<randomNumber){
        cout << "numero on liian pieni" << endl;
    }
    else if(playerGuess>randomNumber){
        cout << "numero on liian suuri" << endl;
    }
    else{
        cout << "numero on oikein" << endl;
    }
    }
    printGameResult();

}

void Game::printGameResult()
{
    cout << "printGameResult aloittaa" << endl;
    cout << "arvausten maara " << numOfGuesses << endl
         << "maxnumber " << maxNumber << endl
         << "randomnumber " << randomNumber << endl;

}

