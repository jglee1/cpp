#include <iostream>

using namespace std;

int main()
{
  enum Square = {  Empty=0, Pawn, Knight, Bishop, Rook, Queen, King }
  Square chessBoard[8][8];
  chessBoard[0,0] = chessBoard[0,7] = Rook;
  chessBoard[7,0] = chessBoard[7,7] = Rook;
}

