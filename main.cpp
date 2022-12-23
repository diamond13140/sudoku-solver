#include<iostream>
#include "mainSudokuSolve.cpp"
using namespace std;
vector<vector<char>> board;

// For Designing -->
void printStar(){
    for (int i = 0; i < 76; i++)
    {
        cout << "*";
    }cout << endl ;
}

// For Printing sudoku Board -->
void print(vector<vector<char>> v){

    printStar();
    cout << endl;

    // Accessing Rows of Sudoku -->
    for (int i = 0; i < 9; i++){
        cout << "    ";
        if( i==0){

            cout << "\t\t";
            for(int m=0; m<29 ; m++){
                cout << "#";
            }cout << endl;
        }
        else if( i==3 || i==6 ){

            cout << "\t\t#";
            for(int m=0; m<27 ; m++){
                cout << "-";
            }cout << "#" << endl;
        }

// Accessing Columns of Sudoku -->
        cout << "\t\t";
        for (int j = 0; j < 9; j++)
        {
            // main border at column side --> 
            if(j==0) cout << "#  ";
            if(j==3 || j==6) {
                cout << " | ";
            }

            cout << v[i][j] << " " ;

            if(j == 8) cout << " #";
        }cout << endl;

        if(i==8){
            cout << "\t\t";
            for(int m=0; m<29 ; m++){
                cout << "#";
            }cout << endl;
        }
    }
    cout << endl;
    printStar();
}

// Greet Player -->
void greet(){

    cout << "Dear Sir/Mam,\n  Please Enter Your full Name : ";
    string name;
    getline(cin, name);

    cout << endl << endl << "Hello " << name;
    cout << " Sir, WELCOME TO diamond's Sudoku Game Puzzle \n\n";
    return;
}

// Intructions -->
void HowtoPlay(){

    printStar();
    printStar();
    cout << endl ;

    cout << "# Instruction --> " << endl;
    cout << "-> Sudoku is played on a grid of 9 x 9 spaces. " << endl;
    cout << "-> Within the rows and columns are 9 'squares' (made up of 3 x 3 spaces)." << endl; 
    cout << "-> Each row, column and square (9 spaces each) needs to be filled out with the numbers 1-9. " << endl;
    cout << "-> Without repeating any numbers within the row, column or square. Does it sound complicated?" << endl;
    cout << "-> Each Sudoku grid comes with a few spaces already filled in, the more spaces filled in. " << endl;
    cout << "-> The easier the game the more difficult Sudoku puzzles have very few spaces that are already filled in." << endl;

    cout << "\n\n# RULES -->\n";
    cout << "-> Each Column should be contain unique number (1-9)" << endl;
    cout << "-> Each Row should be contain unique number (1-9)" << endl;
    cout << "-> Each 3x3 grid should be contain unique number (1-9)" << endl;
    cout << endl << "\t\t ***GOOD LUCK ***" << endl;

    cout << endl;
    cout << endl;
    cout << endl;
}

// Display All Levels --> 
int allLevel(){
    int level;

cout << endl << " NOTE : As level Increases Difficulty of question increases -->" << endl;

    cout << "(press) 1   -->    Level 1 "  << endl ;
    cout << "(press) 2   -->    Level 2 "  << endl ;
    cout << "(press) 3   -->    Level 3 "  << endl ;

    cout << "(press) 4   -->    Level 4 "  << endl ;
    cout << "(press) 5   -->    Level 5 "  << endl ;
    cout << "(press) 6   -->    Level 6 "  << endl ;

    cout << "(press) 7   -->    Level 7 "  << endl ;
    cout << "(press) 8   -->    Level 8 "  << endl ;

    cout << "(press) 9   -->    Level 9 "  << endl ;
    cout << "(press) 10  -->    Level 10 "  << endl ;

    cout << "NOTE : ***for Constmize your own problem visit level_10.cpp " << endl;

    cout << endl;
    cout << "Select Level : " << endl;
    cin >> level;

    return level;
}

// Clear Screen -->
void clearScreen(){
    for(int i=0; i<32; i++){
        cout << endl;
    }
}

// This is Main Control Function from  where we control all the sufoku code stuff -->
void mainControl(bool flag = false){

    int level ,hitNum, random;


    if(!flag){

        cout << "\t\t--> Game Level            --> (Press) 1 " << endl;
        cout << "\t\t--> Start Random problem  --> (Press) 2 " << endl;
        cout << "\t\t--> How to Play           --> (Press) 9 " << endl;
        cout << "\t\t--> Exit                  --> (Press) 0 " << endl;
        flag = true;
    }
    else{
        cout << "\t\t--> Check Solution        --> (Press) 8 " << endl;
        cout << "\t\t--> Go to Another Problem --> (Press) 1 " << endl;
        cout << "\t\t--> Start Random problem  --> (Press) 2 " << endl;
        cout << "\t\t--> How to Play           --> (Press) 9 " << endl;
        cout << "\t\t--> Exit                  --> (Press) 0 " << endl;
    }

    cin >> hitNum;

    switch(hitNum){
        case 0:
            exit(0);
            break;

        case 1:
            clearScreen();
            level = allLevel();
            board = getLevel(level);
            print(board);

            flag = true;
            mainControl(flag);
            break;

        case 2:
            random = rand() % 10;
            board = getLevel(random);
            
            printStar();
            print(board);
            printStar();

            mainControl(true);
            exit(0);
            break;

        case 8:
            clearScreen();
            print(board);
            board = getSolution(board);
            
            printStar();
            print(board);
            printStar();
        

            mainControl(false);
            break;

        case 9:
            clearScreen();
            HowtoPlay();
            mainControl();
            break; 

        default:
            cout << "\t\t??? Invalid input ???" << endl;
            mainControl(false);
            break;
    }

    // HowtoPlay();
}

int main(){

    greet();
    mainControl();

    // vector<vector<char>> board = getLevel(4);

    // bool a = getSolution(board);

    // if(a){
    //     printStar();
    //     print(board);
    //     printStar();
    // }
    // else{
    //     cout << "Invalid data given in Sudoku " << endl;
    // }
 
return 0;
}


