// General functions for all games

#include "CatRescueGame.h"
#include <iostream>
#include <windows.h>
#include <fstream>
#include <time.h>


// print foster home
void FosterHome::printFosterHome()
{

    std::cout << std::endl;
    std::cout << "        =^.^=";
    std::cout << std::endl;
    std::cout << "     Foster Care   " << std::endl;
    std::cout << " x  1   2   3   4  " << std::endl;
    std::cout << "y -----------------" << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << i + 1 << " | " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " | " << board[i][3] << " |\n";
        std::cout << "  -----------------" << std::endl;
    }



}

void FosterHome::clearFosterHome2Player()
{
    //Empties the foster home
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 4; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i = 3; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 1; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 3; j < 4; j++) {
            board[i][j] = ' ';
        }
    }

    // generate random cat square in middle
    srand(time(NULL));

    char arrayCats1[5] = { 'T', 'C', 'G', 'B', 'W' };
    char arrayCats2[5] = { 'T', 'C', 'G', 'B', 'W' };
    char arrayCats3[5] = { 'T', 'C', 'G', 'B', 'W' };
    char arrayCats4[5] = { 'T', 'C', 'G', 'B', 'W' };
    int RandIndex1 = rand() % 5;
    int RandIndex2 = rand() % 5;
    int RandIndex3 = rand() % 5;
    int RandIndex4 = rand() % 5;

    board[1][1] = arrayCats1[RandIndex1];
    board[2][1] = arrayCats2[RandIndex2];
    board[1][2] = arrayCats3[RandIndex3];
    board[2][2] = arrayCats4[RandIndex4];



}

void FosterHome::clearFosterHome1Player() {
    //Empties the foster home
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 4; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i = 3; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 1; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 3; j < 4; j++) {
            board[i][j] = ' ';
        }
    }

    // generate random cat square in middle
    srand(time(NULL));

    char arrayCats1[6] = { 'T', 'C', 'G', 'B', 'W', 'S' };
    char arrayCats2[6] = { 'T', 'C', 'G', 'B', 'W', 'S' };
    char arrayCats3[6] = { 'T', 'C', 'G', 'B', 'W', 'S' };
    char arrayCats4[6] = { 'T', 'C', 'G', 'B', 'W', 'S' };
    int RandIndex1 = rand() % 6;
    int RandIndex2 = rand() % 6;
    int RandIndex3 = rand() % 6;
    int RandIndex4 = rand() % 6;

    board[1][1] = arrayCats1[RandIndex1];
    board[2][1] = arrayCats2[RandIndex2];
    board[1][2] = arrayCats3[RandIndex3];
    board[2][2] = arrayCats4[RandIndex4];
}

void FosterHome::clearFosterHome2PlayerDifficult()
{
    //Empties the foster home
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 4; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i = 3; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 1; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 3; j < 4; j++) {
            board[i][j] = ' ';
        }
    }

    // generate random cat square in middle
    srand(time(NULL));

    char arrayCats1[7] = { 'T', 'C', 'G', 'B', 'W', 'F', 'R' };
    char arrayCats2[7] = { 'T', 'C', 'G', 'B', 'W', 'F', 'R' };
    char arrayCats3[7] = { 'T', 'C', 'G', 'B', 'W', 'F', 'R' };
    char arrayCats4[7] = { 'T', 'C', 'G', 'B', 'W', 'F', 'R' };
    int RandIndex1 = rand() % 7;
    int RandIndex2 = rand() % 7;
    int RandIndex3 = rand() % 7;
    int RandIndex4 = rand() % 7;

    board[1][1] = arrayCats1[RandIndex1];
    board[2][1] = arrayCats2[RandIndex2];
    board[1][2] = arrayCats3[RandIndex3];
    board[2][2] = arrayCats4[RandIndex4];



}

void ForeverHome2Player::printForeverHome_2player()
{
    // prints forever homes
    std::cout << std::endl;
    std::cout << "Furrever Home 1           Furrever Home 2" << std::endl;
    std::cout << "---------                 ---------" << std::endl;

    std::cout << "|" << ForeverHome1 << " =^.^=|                 |" << ForeverHome2 << " =^.^=|\n";

    std::cout << "---------                 ---------" << std::endl;

}
void ForeverHome2Player::clearForeverHome_2player()
{
    // resets counters to zero
    ForeverHome1 = 0;
    ForeverHome2 = 0;
}

void ForeverHome1Player::printForeverHome_1player()
{
    // prints forever homes
    std::cout << std::endl;
    std::cout << "Furrever Home" << std::endl;
    std::cout << "---------" << std::endl;

    std::cout << "|" << ForeverHome << " =^.^=|" << std::endl;

    std::cout << "---------" << std::endl;

}
void ForeverHome1Player::clearForeverHome_1player()
{
    // resets counters to zero
    ForeverHome = 0;
}

// stalemate conditions
//bool stalemate::checkforStalemate()
//{
//    // check if none of squares are blank
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            if (board[j][i] != ' ') {
//                return true;
//            }
//            else {
//                return false;
//            }
//
//        }
//    }
//}

// get coordinates from input
int playing::getXCoord()
{
    bool isInputBad = true;

    int x;

    while (isInputBad == true) {
        std::cout << "Where do you want to place your cat?" << std::endl;
        std::cout << "Enter the X coordinate: ";
        std::cin >> x;

        if (x < 1 || x > 4) {
            std::cout << "Invalid Coordinate!" << std::endl;
        }
        else {
            isInputBad = false;
        }
    }
    return x - 1;
}

int playing::getYCoord()
{
    bool isInputBad = true;

    int y;

    while (isInputBad == true) {
        std::cout << "Enter the Y coordinate: ";
        std::cin >> y;

        if (y < 1 || y > 4) {
            std::cout << "Invalid Coordinate!" << std::endl;
        }
        else {
            isInputBad = false;
        }
    }
    return y - 1;
}

bool playing::placeCat(int x, int y, char currentCat)
{
    if (board[y][x] != ' ') {
        return false;
    }

    board[y][x] = currentCat;
    return true;
}

bool playing::checkFor4InARow(char currentCat) {

   // rows
    for (int i = 0; i < 4; i++) {
        if ((board[i][0] == currentCat) && (board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && (board[i][2] == board[i][3])) {
            for (int j = 0; j < 4; j++) {
                board[i][j] = ' ';
            }

            return true;
        }
    }

    // columns 
    for (int i = 0; i < 4; i++) {
        if ((board[0][i] == currentCat) && (board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && (board[i][2] == board[i][3])) {
            for (int j = 0; j < 4; j++) {
                board[i][j];
            }

            return true;
        }
    }

    // diagonals
    if ((board[0][0] == currentCat) && (board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) && (board[2][2] == board[3][3])) {
        board[0][0] = ' ';
        board[1][1] = ' ';
        board[2][2] = ' ';
        board[3][3] = ' ';

        return true;
    }
    if ((board[0][3] == currentCat) && (board[0][3] == board[1][2]) && (board[1][2] == board[2][1]) && (board[2][1] == board[3][0])) {
        board[0][3] = ' ';
        board[1][2] = ' ';
        board[2][1] = ' ';
        board[3][0] = ' ';

        return true;
    }

    return false;

}

bool playing::checkForAdoption(char currentCat)
{


    //Check the rows
    for (int i = 0; i < 4; i++) {
        if ((board[i][0] == currentCat) && (board[i][0] == board[i][1]) && (board[i][1] == board[i][2])) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = ' ';
            }

            return true;
        }
    }

    for (int i = 0; i < 4; i++) {
        if ((board[i][1] == currentCat) && (board[i][1] == board[i][2]) && (board[i][2] == board[i][3])) {
            for (int j = 1; j < 4; j++) {
                board[i][j] = ' ';
            }

            return true;
        }
    }

    //Check the columns
    for (int i = 0; i < 4; i++) {
        if ((board[0][i] == currentCat) && (board[0][i] == board[1][i]) && (board[1][i] == board[2][i])) {
            for (int j = 0; j < 3; j++) {
                board[j][i] = ' ';
            }

            return true;
        }
    }

    for (int i = 0; i < 4; i++) {
        if ((board[1][i] == currentCat) && (board[1][i] == board[2][i]) && (board[2][i] == board[3][i])) {
            for (int j = 1; j < 4; j++) {
                board[j][i] = ' ';
            }

            return true;
        }
    }

    //Check top left diagonals
    if ((board[0][0] == currentCat) && (board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
        board[0][0] = ' ';
        board[1][1] = ' ';
        board[2][2] = ' ';

        return true;
    }
    if ((board[1][0] == currentCat) && (board[1][0] == board[2][1]) && (board[2][1] == board[3][2])) {
        board[1][0] = ' ';
        board[2][1] = ' ';
        board[3][2] = ' ';

        return true;
    }

    //Check top right diagonals
    if ((board[2][0] == currentCat) && (board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
        board[2][0] = ' ';
        board[1][1] = ' ';
        board[0][2] = ' ';
        return true;
    }
    if ((board[3][0] == currentCat) && (board[3][0] == board[2][1]) && (board[2][1] == board[1][2])) {
        board[3][0] = ' ';
        board[2][1] = ' ';
        board[1][2] = ' ';

        return true;
    }

    //Check bottom left diagonals
    if ((board[0][3] == currentCat) && (board[0][3] == board[1][2]) && (board[1][2] == board[2][1])) {
        board[0][3] = ' ';
        board[2][1] = ' ';
        board[1][2] = ' ';

        return true;
    }
    if ((board[1][3] == currentCat) && (board[1][3] == board[2][2]) && (board[2][2] == board[3][1])) {
        board[1][3] = ' ';
        board[2][2] = ' ';
        board[3][1] = ' ';

        return true;
    }

    //Check bottom right diagonals
    if ((board[0][1] == currentCat) && (board[0][1] == board[1][2]) && (board[1][2] == board[2][3])) {
        board[0][1] = ' ';
        board[1][2] = ' ';
        board[2][3] = ' ';

        return true;
    }

    if ((board[3][3] == currentCat) && (board[3][3] == board[2][2]) && (board[2][2] == board[1][1])) {
        board[3][3] = ' ';
        board[2][2] = ' ';
        board[1][1] = ' ';

        return true;
    }



    return false; /// bool return false
}


void playing::high_score(int ForeverHome) {

    std::ifstream input("high_score.txt");

    int high_score;
    input >> high_score;

    std::ofstream output("high_score.txt");

    if (ForeverHome > high_score) {
        output << ForeverHome;
        std::cout << "New high score is " << ForeverHome << "!" << std::endl;
    }
    else {
        output << high_score;
        std::cout << "Current high score is " << high_score << "." << std::endl;
    }


}


