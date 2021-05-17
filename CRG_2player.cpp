// 2 player mode

#include "CatRescueGame.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>


// outline gameplay
void two_player_mode::gameplay()
{
    system("Color CF");

    clearFosterHome2Player();
    clearForeverHome_2player();


    //char currentPlayer = player1;
    bool isDone = false;

    int x, y;


    char player1 = '1';
    char player2 = '2';

    char currentPlayer = player1;

    // inner game loop
    while (isDone == false) {


        //Print out the board each loop
        printFosterHome();
        printForeverHome_2player();
        

        std::cout << "Current player: " << currentPlayer << std::endl;

        srand(time(NULL));

        char arrayCats[5] = { 'T', 'C', 'G', 'B', 'W' };
        int RandIndex = rand() % 5;

        char currentCat = arrayCats[RandIndex];
        if (arrayCats[RandIndex] == 'C') {
            std::cout << "You rescued a Calico cat " << "(" << arrayCats[RandIndex] << ") !" << std::endl;
            std::cout << "Place them in foster care..." << std::endl;
        }
        if (arrayCats[RandIndex] == 'T') {
            std::cout << "You rescued a Tabby cat " << "(" << arrayCats[RandIndex] << ") !" << std::endl;
            std::cout << "Place them in foster care..." << std::endl;
        }
        if (arrayCats[RandIndex] == 'G') {
            std::cout << "You rescued a Grey cat " << "(" << arrayCats[RandIndex] << ") !" << std::endl;
            std::cout << "Place them in foster care..." << std::endl;
        }
        if (arrayCats[RandIndex] == 'B') {
            std::cout << "You rescued a Black cat " << "(" << arrayCats[RandIndex] << ") !" << std::endl;
            std::cout << "Place them in foster care..." << std::endl;
        }
        if (arrayCats[RandIndex] == 'W') {
            std::cout << "You rescued a White cat " << "(" << arrayCats[RandIndex] << ") !" << std::endl;
            std::cout << "Place them in foster care..." << std::endl;
        }

        // get coordinates to place kitty
        x = getXCoord();
        y = getYCoord();

        //Try to place a marker
        if (placeCat(x, y, currentCat) == false) {
            // check if place is already filled
            std::cout << std::endl;
            std::cout << "That spot is occupied by a kitty already!" << std::endl;

        }
        else {


            // check for adoptions 4 in a row
            if (checkFor4InARow(currentCat) == true) {
                if (currentPlayer == player1) {
                    // player adopted a cat
                    std::cout << std::endl;
                    std::cout << "Player " << currentPlayer << " has found a bonded pair of kittens their forever home!" << std::endl;
                    std::cout << "Adopting kittens in pairs means they'll play with each other--not your couch!" << std::endl;
                    ForeverHome1 = ForeverHome1 + 2;
                }
                else if (currentPlayer == player2) {
                    // player adopted a cat
                    std::cout << std::endl;
                    std::cout << "Player " << currentPlayer << " has found a bonded pair of kittens their forever home!" << std::endl;
                    std::cout << "Adopting kittens in pairs means they'll play with each other--not your couch!" << std::endl;
                    ForeverHome2 = ForeverHome2 + 2;
                }
            }


            // check for adoptions per player 3 in a row
            if (checkForAdoption(currentCat) == true) {
                if (currentPlayer == player1) {
                    // player adopted a cat
                    std::cout << std::endl;
                    std::cout << "Player " << currentPlayer << " has found a cat their forever home!" << std::endl;
                    ForeverHome1 = ForeverHome1 + 1;
                }
                else if (currentPlayer == player2) {
                    // player adopted a cat
                    std::cout << std::endl;
                    std::cout << "Player " << currentPlayer << " has found a cat their forever home!" << std::endl;
                    ForeverHome2 = ForeverHome2 + 1;
                }
            }

            // stalemate conditions
            if (checkforStalemate() == true) {
                std::cout << std::endl;
                std::cout << "Foster care is full!" << std::endl;
                std::cout << std::endl;
                if (ForeverHome1 > ForeverHome2) {
                    std::cout << "Player 1 adopted out the most kitties!" << std::endl;
                    std::cout << ForeverHome1 + ForeverHome2 << " cats were adopted in total." << std::endl;
                    std::cout << std::endl;
                }
                if (ForeverHome2 > ForeverHome1) {
                    std::cout << "Player 2 adopted out the most kitties!" << std::endl;
                    std::cout << ForeverHome1 + ForeverHome2 << " cats were adopted in total." << std::endl;
                    std::cout << std::endl;
                }
                if (ForeverHome1 == ForeverHome2) {
                    std::cout << "It's a tie!" << std::endl;
                    std::cout << ForeverHome1 + ForeverHome2 << " cats were adopted in total." << std::endl;
                    std::cout << std::endl;
                }
                isDone = true;
            }

            // Switch players
            if (currentPlayer == player1) {
                currentPlayer = player2;


            }
            else {
                currentPlayer = player1;


            }
        }
    }
}






