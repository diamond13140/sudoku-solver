#include<vector>
using namespace std;

vector<vector<char>> getSudoku8(){
    vector<vector<char>> board = 
    
   {
    {'.', '.', '.'   ,   '.', '.', '.'   ,   '5', '.' ,'.' },
    {'.', '5', '6'   ,   '2', '.', '.'   ,   '7', '.' ,'.' },
    {'.', '8', '9'   ,   '3', '4', '.'   ,   '.', '.' ,'.' },

    {'3', '.', '1'   ,   '5', '.', '.'   ,   '6', '9' ,'.' },
    {'.', '.', '7'   ,   '.', '.', '.'   ,   '.', '.' ,'.' },
    {'6', '9', '.'   ,   '.', '.', '.'   ,   '.', '4' ,'.' },

    {'8', '.', '.'   ,   '.', '.', '.'   ,   '4', '7' ,'.' },
    {'9', '.', '.'   ,   '6', '.', '.'   ,   '.', '.' ,'2' },
    {'.', '.', '.'   ,   '.', '3', '.'   ,   '.', '.' ,'.' },
    }
    ;


    return board;
}
