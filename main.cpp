// Main code

// Project for OOP in C++ by Gemma Lamb
// C a t  R e s c u e
// Based upon Cat Rescue by designer Ta-Te Wu and artist Kaiami 
// Find cats their furrever homes this kitten season by fostering 3 in a row
// Game modes: 1 Player, 2 Players, 2 Players (Difficult)


#include <iostream>

#include "CatRescueGame.h"

// meow
// =^.^=

int main()
{
    system("Color 0F");

    std::cout << "This game is based upon Cat Rescue by designer Ta-Te Wu and artist Kaiami." << std::endl;
    std::cout << "Copyright© Sunrise Tornado Game Studio, Chronicle Books." << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "It's kitten season! So many kitties deserve to find their forever homes." << std::endl;
    std::cout << "Work together, by yourself, or make it a furrendly competition!" << std::endl;
    std::cout << std::endl;
    std::cout << "A flyer at your local cat shelter reads... " << std::endl;
    std::cout << "  'Born on the streets ever year are Tabby (T), Black (B), White (W), Grey (G) and Calico (C) kittens." << std::endl;
    std::cout << "   We even rescue pedigree kitties such as Flame-points (F), Russian Blues (R) and Siamese (S)!" << std::endl;
    std::cout << "   Foster three of the same kitten in a row, columns or diagonal and find them their furrever home.'" << std::endl;

    char input1;
    char input2;
    char input3;
    bool isDone = false;
    //create game object
    
    one_player_mode mode1;
    two_player_mode mode2;
    two_player_mode_diff mode3;
   

    std::cout << std::endl;
    std::cout << "Would 1 or 2 players like to foster cats? (1/2): ";
    std::cin >> input1;

    while (!(input1 == '2') && !(input1 == '1')) {
        std::cout << "Invalid input. Please try again: ";
        std::cin.clear();
        std::cin >> input1;
    }

    // 2 player mode
    if (input1 == '2') {
        std::cout << "Would you like to play normal or difficult mode? (N/D): ";
        std::cin >> input3;

        while (!(input3 == 'N') && !(input3 == 'n') && !(input3 == 'D') && !(input3 == 'd')) {
            std::cout << "Invalid input. Please try again: ";
            std::cin.clear();
            std::cin >> input3;
        }


        if (input3 == 'N' || input3 == 'n') {
            while (isDone == false) {
                mode2.gameplay(); // play normal 2 player game

                // Ask if player wants to play again
                std::cout << "Would you like to rescue more cats? (Y/N): ";
                std::cin >> input2;

                while (!(input2 == 'N') && !(input2 == 'n') && !(input2 == 'Y') && !(input2 == 'y')) {
                    std::cout << "Invalid input. Please try again: ";
                    std::cin.clear();
                    std::cin >> input2;
                }


                if (input2 == 'N' || input2 == 'n') {
                    std::cout << "See you again soon! =^.^=" << std::endl;;
                    isDone = true;
                }
            }
        }

        if (input3 == 'D' || input3 == 'd') {
            while (isDone == false) {
                mode3.gameplay(); // play difficlut 2 player game

                // Ask if player wants to play again
                std::cout << "Would you like to rescue more cats? (Y/N): ";
                std::cin >> input2;

                while (!(input2 == 'N') && !(input2 == 'n') && !(input2 == 'Y') && !(input2 == 'y')) {
                    std::cout << "Invalid input. Please try again: ";
                    std::cin.clear();
                    std::cin >> input2;
                }

                if (input2 == 'N' || input2 == 'n') {
                    std::cout << "See you again soon! =^.^=" << std::endl;;
                    isDone = true;
                }
            }
        }



    }

    // 1 player mode
    else if (input1 == '1') {
        //Gameplay loop
        while (isDone == false) {
            mode1.gameplay(); // play single player game

            // Ask if player wants to play again
            std::cout << "Would you like to rescue more cats? (Y/N): ";
            std::cin >> input2;

            while (!(input2 == 'N') && !(input2 == 'n') && !(input2 == 'Y') && !(input2 == 'y')) {
                std::cout << "Invalid input. Please try again: ";
                std::cin.clear();
                std::cin >> input2;
            }

            if (input2 == 'N' || input2 == 'n') {
                std::cout << "See you again soon! =^.^=" << std::endl;;
                isDone = true;
            }
        }
    }



    system("PAUSE");
    return 0;
}