#include<vector>
using namespace std;

vector<vector<char>> getSudoku7(){
    vector<vector<char>> board = 
    
    {
    {'.', '9', '.'   ,   '.', '.', '3'   ,   '6', '.' ,'.' },
    {'.', '.', '.'   ,   '1', '.', '.'   ,   '2', '.' ,'.' },
    {'3', '.', '2'   ,   '.', '.', '6'   ,   '.', '9' ,'8' },

    {'.', '.', '.'   ,   '.', '.', '.'   ,   '1', '2' ,'5' },
    {'.', '.', '4'   ,   '.', '.', '.'   ,   '8', '.' ,'.' },
    {'5', '2', '9'   ,   '.', '.', '.'   ,   '.', '.' ,'.' },

    {'2', '4', '.'   ,   '7', '.', '.'   ,   '5', '.' ,'3' },
    {'.', '.', '3'   ,   '.', '.', '2'   ,   '.', '.' ,'.' },
    {'.', '.', '8'   ,   '3', '.', '.'   ,   '.', '1' ,'.' },
    }
    ;


    return board;
}
