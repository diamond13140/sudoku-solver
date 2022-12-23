#include <iostream>
#include <vector>
#include <map>
#include "selectLevel.cpp"

using namespace std;

bool isSafe(vector<vector<char>> v, int i, int j, char k){
    for (int x = 0; x < 9; x++)
    {
        if(v[i][x] == k)
            return false;
        if(v[x][j] == k)
            return false;
        if(v[3*(i/3) + x/3][3*(j/3) + x%3]==k)
            return false; 
    }
    return true;
}

//Solve sudoku -->

bool sudokuSolve(vector<vector<char>> &v){
    map<int, char> m ;
        m[1] = '1';
        m[2] = '2';
        m[3] = '3';
        m[4] = '4';
        m[5] = '5';
        m[6] = '6';
        m[7] = '7';
        m[8] = '8';
        m[9] = '9';

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if(v[i][j] == '.'){
                for (int k = 1; k <= 9; k++)
                {
                    if(isSafe(v, i, j, m[k])){
                        v[i][j] = m[k];
                        bool next = sudokuSolve(v);
                        if(next){
                            return true;
                        }
                        else{
                            v[i][j] = '.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

vector<vector<char>> getSolution(vector<vector<char>> &board){
    bool a = sudokuSolve(board);

    if(a){
        return board;
    }

    else{
        cout << "????????????????????????????????????????????????????" << endl;
        cout << "Something went Wrong! "<< endl;
        cout << "Sorry but I suggest you, Please Restart this Game ";
        cout << "????????????????????????????????????????????????????" << endl;
        exit(0);
    }
}


