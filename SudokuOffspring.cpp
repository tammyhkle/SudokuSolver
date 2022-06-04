/**
 * @file SudokuOffspring.cpp
 * @author Le, Tammy
 * @date 2022-05-26
 **/

#include "SudokuOffspring.h"

SudokuOffspring::SudokuOffspring(){}

SudokuOffspring::~SudokuOffspring(){}

//helper function to retreive probability
bool SudokuOffspring::getProbability() {
    int random = rand() % 1000 + 1;
    /* cout << "random: " << random << " change? " << (random <= 50) << endl; */
    return random <= 2;
}

// method to make offspring 
// (uses the method in sudoku class where that method 
// checked if the values are fixed or variable)
shared_ptr<Puzzle> SudokuOffspring::makeOffspring(shared_ptr<Puzzle>& p) {
    //make copy of puzzle
    shared_ptr<Puzzle>& copy = p;
    //visit each cell (x,y) - double for loop bc matrix 

    int size = sizeof(p->grid); 

    for (int i = 0; i < size + 1; i++) {
        for (int j = 0; j < size + 1; j++ ) {
            if(!p->isFixed(i, j)) { //isFixed coming from yohanes sudoku class probability
                // then change value
                if(copy->grid[i][j] == 0 || getProbability() ){
                    int random = rand() % 10;
                    copy->grid[i][j] = random; // adding 48 to correlate with ASCII 0 - 9
                }
            }
        }
    }
    return copy;
}