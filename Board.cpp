#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <string>

#include "Board.hpp"
#include "Direction.hpp"
const char _C = '_' ;


using namespace std;

namespace ariel
{

     void Board::post(unsigned int row,unsigned int col, Direction dir, string s)
     {
         for(unsigned int i=0; i<s.length();i++)
         {
            if(dir == Direction::Vertical)
            {
                this->board[row+i][col]=s[i];
                this->row = (unsigned int) max((int)(row + s.length()), (int)(this -> row));
                this->col = ((unsigned int) max((int)(col),(int)(this -> col)));
            }
            else 
            {
                this->board[row][col+i]=s[i];
                this->row = (unsigned int) max((int) (row), (int)(this -> row));
                this->col = (unsigned int) max((int) (col + s.length()),(int)(this -> col));
            }
         }
            this->rowM = (unsigned int) min ((int) row, (int) this -> row);
            this->colM = ((unsigned int) min ((int) col,(int) this -> col));
     }

     string Board::read(unsigned int row,unsigned int col,Direction dir,unsigned int l)
     {
         string s="";
         for(unsigned int i=0; i<l; i++)
         {
             if (dir==Direction::Vertical)
             {
                 if(this -> board[row+i][col] != 0)
                 {
                    s = s + this -> board[row+i][col];
                 }
                 else 
                 {
                     s = s + (char) _C;
                 }
             }
             else 
             {
                 if(this -> board[row][col+i] != 0)
                 {
                    s = s + this -> board[row][col+i];
                 }
                 else 
                 {
                     s = s + (char) _C;
                 }
             }
         }

        return s;
     }

    void Board::show()
    {
        //return 0;
    }


}