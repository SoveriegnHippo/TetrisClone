#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
private:
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    void UpdateScore(int linesCleared, int moveDownPoints);
    void MoveBlockLeft();
    void MoveBlockRight();
    Grid grid;
    Sound rotateSound;
    Sound clearSound;
public:
    bool gameOver;
    Game();
    ~Game();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    void Draw();
    void HandleInput();
    void MoveBlockDown();
    int score;
    Music music;

};
