#include <map>
#include <string>
#include "Direction.hpp"
 
 using namespace std;
 const int MAX_I = 2147483647;
 const int MIN_I = 0;


 namespace ariel
 {
     class Board
     {
         map<unsigned int,map<unsigned int,char>>board;
         unsigned int row , col , rowM , colM;


         public:
            Board()
            {
                this->row=MIN_I;
                this->col=MIN_I;
                this->colM = MAX_I;
                this->rowM = MAX_I;
            }
        void post(unsigned int row, unsigned int col, Direction dir, string s);
        string read(unsigned int row, unsigned int col, Direction dir, unsigned int l);
        void show();
     };
 }