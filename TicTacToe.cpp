#include <iostream>
#include <string>
#include <vector>

using namespace std;

string * CreateBoard(){
    string board [] = {{'','',''},{'','',''},{'','',''}};
    return board;
}

void DisplayBoard(string * board){
    cout << board << endl;
}

