// 1 player mode

#include "CatRescueGame.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void one_player_mode::gameplay()
{

    system("Color E4");


    clearFosterHome1Player();
    clearForeverHome_1player();

    //char currentPlayer = player1;
    bool isDone = false;

    int x, y;

    // inner game loop

    while (isDone == false) {


        //Print out the board each loop
        printFosterHome();
        printForeverHome_1player();

        srand(time(NULL));

        char arrayCats[6] = { 'T', 'C', 'G', 'B', 'W', 'S' };
        int RandIndex = rand() % 6;

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
        if (arrayCats[RandIndex] == 'S') {
            std::cout << "You rescued a Siamese cat " << "(" << arrayCats[RandIndex] << ") !" << std::endl;
            std::cout << "Place them in foster care..." << std::endl;
        }

        // get coordinates to place kitty
        x = getXCoord();
        y = getYCoord();

        ////Try to place a cat
        if (placeCat(x, y, currentCat) == false) {
            // check if place is already filled
            std::cout << std::endl;
            std::cout << "That spot is occupied by a kitty already!" << std::endl;
        }

        else {

            // check for adoptions 4 in a row
            if (checkFor4InARow(currentCat) == true) {
                // player adopted a cat
                std::cout << std::endl;
                std::cout << "You have found a bonded pair of kittens their forever home!" << std::endl;
                std::cout << "Adopting kittens in pairs means they'll play with each other--not your couch!" << std::endl;
                ForeverHome = ForeverHome + 2;
            }



            // check for adoptions per player 3 in a row
            if (checkForAdoption(currentCat) == true) {
                // player adopted a cat
                std::cout << std::endl;
                std::cout << "You have found a cat their forever home!" << std::endl;
                ForeverHome = ForeverHome + 1;

            }




            // Game ends when stalemate achieved
            /*if (checkforStalemate() == true) {
                std::cout << std::endl;
                std::cout << "Foster care is full!" << std::endl;
                std::cout << "You have found forever homes for " << ForeverHome << " cats! Well done!" << std::endl;
                high_score(ForeverHome); /// see if player has created a high score!
                std::cout << std::endl;
                isDone = true;
            }*/
        }
    }

}
