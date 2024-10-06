#include "block.h"
#include "position.h"

class LBlock : public Block{

    public:
        LBlock(){
            id = 3;
            cells[0] = {Position(0,2), Position(1,0), Position(1,1), Position(1,2)};
            cells[1] = {Position(0,1), Position(1,1), Position(2,1), Position(2,2)};
            cells[2] = {Position(1,0), Position(1,1), Position(1,2), Position(2,0)};
            cells[3] = {Position(0,0), Position(0,1), Position(1,1), Position(2,1)};
            Move(0,3);
        }
};

class ReverseLBlock : public Block{

    public:
        ReverseLBlock(){
            id = 7;
            cells[0] = {Position(0,0), Position(1,0), Position(1,1), Position(1,2)};
            cells[1] = {Position(0,1), Position(0,2), Position(1,1), Position(2,1)};
            cells[2] = {Position(1,0), Position(1,1), Position(1,2), Position(2,2)};
            cells[3] = {Position(0,1), Position(1,1), Position(2,0), Position(2,1)};
            Move(0,3);
        }
};

class LineBlock : public Block{
    public:
        LineBlock(){
            id = 6;
            cells[0] = {Position(0,2), Position(1,2), Position(2,2), Position(3,2)};
            cells[1] = {Position(2,0), Position(2,1), Position(2,2), Position(2,3)};
            cells[2] = {Position(0,1), Position(1,1), Position(2,1), Position(3,1)};
            cells[3] = {Position(1,0), Position(1,1), Position(1,2), Position(1,3)};
            Move(0,3);
        }
};

class SquareBlock : public Block{
    public:
        SquareBlock(){
            id = 4;
            cells[0] = {Position(0,0), Position(0,1), Position(1,0), Position(1,1)};
            cells[1] = {Position(0,0), Position(0,1), Position(1,0), Position(1,1)};
            cells[2] = {Position(0,0), Position(0,1), Position(1,0), Position(1,1)};
            cells[3] = {Position(0,0), Position(0,1), Position(1,0), Position(1,1)};
            Move(0,4);
        }
};

class SquiggleBlock : public Block{
    public:
        SquiggleBlock(){
            id = 1;
            cells[0] = {Position(0,1), Position(0,2), Position(1,0), Position(1,1)};
            cells[1] = {Position(0,1), Position(1,1), Position(1,2), Position(2,2)};
            cells[2] = {Position(1,1), Position(1,2), Position(2,0), Position(2,1)};
            cells[3] = {Position(0,0), Position(1,0), Position(1,1), Position(2,1)};
            Move(0,3);
        }
};

class TBlock : public Block{
    public:
        TBlock(){
            id = 5;
            cells[0] = {Position(0,1), Position(1,0), Position(1,1), Position(1,2)};
            cells[1] = {Position(0,1), Position(1,1), Position(1,2), Position(2,1)};
            cells[2] = {Position(1,0), Position(1,1), Position(1,2), Position(2,1)};
            cells[3] = {Position(0,1), Position(1,0), Position(1,1), Position(2,1)};
            Move(0,3);
        }
};

class ReverseSquiggleBlock : public Block{
    public:
        ReverseSquiggleBlock(){
            id = 2;
            cells[0] = {Position(0,0), Position(0,1), Position(1,1), Position(1,2)};
            cells[1] = {Position(0,2), Position(1,1), Position(1,2), Position(2,1)};
            cells[2] = {Position(1,0), Position(1,1), Position(2,1), Position(2,2)};
            cells[3] = {Position(0,1), Position(1,0), Position(1,1), Position(2,0)};
            Move(0,3);
        }
};

