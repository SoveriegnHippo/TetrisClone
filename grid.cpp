#include "grid.h"
#include <iostream>
#include "colors.h"


Grid::Grid(){
    numRows = 20;
    numColms = 10;
    cellSize = 30;
    Inisilize();
    colors = GetCellColors();
    
}

void Grid::Inisilize(){
    for(int row = 0;row < numRows;row++ ){
        for(int colm = 0; colm < numColms;colm++){
            grid[row][colm] = 0;
        }
    }
}

void Grid::print(){
    for(int row = 0;row < numRows;row++ ){
        for(int colm = 0; colm < numColms;colm++){
            std::cout << grid[row][colm] << " ";
        }
        std::cout << std::endl;
    }
}



void Grid::Draw(){
    for(int row = 0;row < numRows;row++ ){
        for(int colm = 0; colm < numColms;colm++){
            int cellValue =  grid[row][colm];
            DrawRectangle(colm * cellSize+11,row * cellSize + 11, cellSize - 1, cellSize - 1,colors[cellValue]);
        }
       
    }
}

bool Grid::IsCellOutside(int row, int column)
{
    if(row >= 0 && row < numRows && column >= 0 && column < numColms){
        return false;
    }
    return true;
    
}

bool Grid::IsCellEmpty(int row, int column)
{
    if(grid[row][column] == 0){
        return true;
    }
    return false;
}

int Grid::ClearFullRows()
{
    int completed = 0;
    for(int row = numRows - 1; row >= 0; row--){
        if(IsRowFull(row)){
            ClearRow(row);
            completed++;
        }
        else if(completed > 0){
            MoveRowDown(row,completed);
        }
    }
    return completed;
}

bool Grid::IsRowFull(int row)
{
    for (int column = 0; column < numColms; column++){
        if(grid[row][column] == 0){
            return false;
        }
    }
    return true;
}

void Grid::ClearRow(int row)
{
    for (int column = 0; column < numColms; column++){
        grid[row][column] = 0;
    }
}

void Grid::MoveRowDown(int row, int numRows)
{
    for(int column = 0; column < numColms; column++){
        grid[row + numRows][column] = grid[row][column];
        grid[row][column] = 0;
    }
}
