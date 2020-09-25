#include <iostream>
#include <string>
#include <vector>

using namespace std;

int **CreateBoard(){
    //int l[9] = {0,1,2,3,4,5,6,7,8};
    int** board = 0;
    board = new int*[3];
    for(int i = 0; i < 3; i++){
        board[i] = new int[3];
    }
    board[0][0] = 0;
    board[0][1] = 1;
    board[0][2] = 2;
    board[1][0] = 3;
    board[1][1] = 4;
    board[1][2] = 5;
    board[2][0] = 6;
    board[2][1] = 7;
    board[2][2] = 8;
    //cout << board << endl;
    return board;
}

void DisplayBoard(int ** b){
    int count = 1;
    for(int i = 0;i<3;i++){
        for(int j = 0; j < 3; j++){
            if(count == 3){
                cout << " " << b[i][j] << endl;
                count = 1;
            }
            else{
                cout << " " << b[i][j];
                count = count + 1;
            }
        }
    }
}

int GetPlayerChoice(){
    int choice;
    cout << "Enter Your Choice As The Number Value" << endl;
    cin >> choice;
    return choice;
}

int ** PlaceMarker(int ** b,int mark,int loc){
    if(loc == 0){
        b[0][0] = mark;
    }
    else if (loc == 1){
        b[0][1] = mark;
    }
    else if (loc == 2){
        b[0][2] = mark;
    }
    else if (loc == 3){
        b[1][0] = mark;
    }
    else if (loc == 4){
        b[1][1] = mark;
    }
    else if (loc == 5){
        b[1][2] = mark;
    }
    else if (loc == 6){
        b[2][0] = mark;
    }
    else if (loc == 7){
        b[2][1] = mark;
    }
    else if (loc == 8){
        b[2][2] = mark;
    }
    return b;
}

int main(){
    cout << "First Player will be marked with 11" << endl;
    cout << "Second Player will be marked with 10" << endl;
    int choice;
    int** board = CreateBoard();
    for(int i = 0; i < 9; i++){
        //test create board function
        //cout << "Past Create Board" << endl;
        //test display board
        DisplayBoard(board);
        //cout << "Past Display Board" << endl;
        //test player choice
        choice = GetPlayerChoice();
        if(i%2){
            board = PlaceMarker(board,10,choice);
        }
        else{
            board = PlaceMarker(board,11,choice);
        }
    }
    DisplayBoard(board);
    return 0;
}
