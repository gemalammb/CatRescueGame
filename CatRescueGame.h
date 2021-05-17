// Cat Rescue Game header file

#include <iostream>
#include <fstream>


#pragma once

// BOARD

class board
{
public:
    char board[4][4];
};

class FosterHome : board
{
public:
    void printFosterHome();
    void clearFosterHome1Player();
    void clearFosterHome2Player();
    void clearFosterHome2PlayerDifficult();
};


// FOREVER HOMES

class ForeverHome
{
public:
    ForeverHome() {}
    virtual ~ForeverHome() {}
};

class ForeverHome1Player: ForeverHome
{
public:
    ~ForeverHome1Player() {}
    int ForeverHome;
    void printForeverHome_1player();
    void clearForeverHome_1player();
};

class ForeverHome2Player : ForeverHome
{
public:
    int ForeverHome1, ForeverHome2;
    void printForeverHome_2player();
    void clearForeverHome_2player();
};



// GENERAL

class playing : board
{
public:
    int getXCoord();
    int getYCoord();
    bool checkForAdoption(char currentCat);
    bool checkFor4InARow(char currentCat);
    void high_score(int ForeverHome);
    bool placeCat(int x, int y, char currentCat);
//    bool checkforStalemate();
};








// GAME PLAY
class CatRescueGame
{
public:
    virtual ~CatRescueGame() {}
    virtual void gameplay() = 0;
};

class one_player_mode : CatRescueGame, FosterHome, ForeverHome1Player, playing {
public:
    one_player_mode() {}
    ~one_player_mode() {}
    void gameplay();

};

class two_player_mode : CatRescueGame, FosterHome, ForeverHome2Player, playing {
public:
    two_player_mode() {}
    ~two_player_mode() {}
    void gameplay();
};

class two_player_mode_diff : CatRescueGame, FosterHome, ForeverHome2Player, playing {
public:
    two_player_mode_diff() {}
    ~two_player_mode_diff() {}
    void gameplay();
};
