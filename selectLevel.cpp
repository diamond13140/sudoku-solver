#include<iostream>
#include "level_1.cpp"
#include "level_2.cpp"
#include "level_3.cpp"
#include "level_4.cpp"
#include "level_5.cpp"
#include "level_6.cpp"
#include "level_7.cpp"
#include "level_8.cpp"
#include "level_9.cpp"
#include "level_10.cpp"

using namespace std;

vector<vector<char>> getLevel(int data){
    vector<vector<char>> board;
    switch(data){
        case 1:
            board = getSudoku1();
            break;
 
        case 2:
            board = getSudoku2();
            break;
 
        case 3:
            board = getSudoku3();
            break;
 
        case 4:
            board = getSudoku4();
            break;
 
        case 5:
            board = getSudoku5();
            break;
 
        case 6:
            board = getSudoku6();
            break;
 
        case 7:
            board = getSudoku7();
            break;
 
        case 8:
            board = getSudoku8();
            break;
 
        case 9:
            board = getSudoku9();
            break;
 
        case 10:
            board = getSudoku10();
            break;
 
        default:
            cout << " You enter Invalid level number " << endl;
            cout << "Please Try Again --> " << endl;
            cout << "Select Level : " << endl;

            cin >> data;
            getLevel(data);
            break;              
    }

    return board;
}

