#include<vector>
using namespace std;

vector<vector<char>> getSudoku3(){
    vector<vector<char>> board = 
    
    {
    {'6', '.', '2'   ,   '.', '3', '.'   ,   '.', '1' ,'.' },
    {'.', '3', '.'   ,   '1', '4', '.'   ,   '6', '2' ,'.' },
    {'.', '8', '.'   ,   '6', '9', '2'   ,   '5', '7' ,'.' },

    {'.', '.', '8'   ,   '5', '.', '7'   ,   '2', '3' ,'1' },
    {'2', '5', '.'   ,   '9', '8', '.'   ,   '7', '.' ,'.' },
    {'.', '1', '6'   ,   '4', '2', '3'   ,   '.', '.' ,'5' },

    {'3', '7', '.'   ,   '.', '.', '6'   ,   '4', '.' ,'.' },
    {'4', '2', '.'   ,   '8', '5', '.'   ,   '3', '6' ,'.' },
    {'8', '6', '9'   ,   '3', '.', '.'   ,   '1', '5' ,'2' },
    };


    return board;
}