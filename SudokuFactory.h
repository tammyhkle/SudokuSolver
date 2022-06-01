/**
 * @file SudokuFactory.h
 * @author Le, Tammy
 * @brief 
 * Notes:
 * The SudokuFactory uses a SudokuOffspring object and implements "createPuzzle" to produce new Sudoku objects.
 * @date 2022-05-26
 **/

#ifndef SUDOKUOFACTORY_H_
#define SUDOKUOFACTORY_H_

#include "Puzzle.h" 
#include "Reproduction.h"
#include "PuzzleFactory.h"

using namespace std;

class SudokuFactory : public PuzzleFactory {

public:
    //default constructor 
    SudokuFactory();
};
#endif //SUDOKUOFACTORY_H_