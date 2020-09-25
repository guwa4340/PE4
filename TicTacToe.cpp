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


string GetPlayerChoice(){
    string choice;
    cout << "Enter Your Choice As The Number Value" << endl;
    cin >> choice;
    return choice;
}


int main(){
    //test create board function
    int** board = CreateBoard();
    //cout << "Past Create Board" << endl;
    //test display board
    DisplayBoard(board);
    //cout << "Past Display Board" << endl;
    //test player choice
    GetPlayerChoice();
    return 0;
}
