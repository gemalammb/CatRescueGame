// Cat Rescue Game header file

#include <iostream>
#include <fstream>


#pragma once

// BOARD

class Board
{
public:
    // default constructor
    Board() = default;
    // default destructor - virtual in case we decide to inherit from it
    virtual ~Board() = default;


    // actual board representation
    char board[4][4];

    // print board
    virtual void printFosterHome();
    // initialise board 1 player
    virtual void clearFosterHome1Player();
    // initialise board 2 player difficult
  
    // check for adoption
    virtual bool checkForAdoption(char currentCat);
    virtual bool checkFor4InARow(char currentCat);
   
    // populate with mark
    virtual bool placeCat(int x, int y, char currentCat);

    // initialise board 2 player
    virtual void clearFosterHome2Player();
    
    virtual void clearFosterHome2PlayerDifficult();
    
    // get X co ord
    virtual int getXCoord();

    // get Y co ord
    virtual int getYCoord();
    
    // find high score
    virtual void high_score(int ForeverHome);
    

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







// GAME PLAY
class CatRescueGame
{
public:
    virtual ~CatRescueGame() {}
    virtual void gameplay() = 0;
};

class one_player_mode : CatRescueGame, Board, ForeverHome1Player {
public:
    one_player_mode() {}
    ~one_player_mode() {}
    void gameplay();

};

class two_player_mode : CatRescueGame, Board, ForeverHome2Player {
public:
    two_player_mode() {}
    ~two_player_mode() {}
    void gameplay();
};

class two_player_mode_diff : CatRescueGame, Board, ForeverHome2Player {
public:
    two_player_mode_diff() {}
    ~two_player_mode_diff() {}
    void gameplay();
};
