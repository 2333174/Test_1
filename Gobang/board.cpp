
#include "board.h"
#ifdef BOARD_H
Board::Board()
{
	this->current_player = BLACK;
	for (int i = 0; i < BORDER_SIZE; i++){
		for (int j = 0; j < BORDER_SIZE; j++){
			this->board[i][j] = BLANK;
		}
	}
}

void Board::print_board()
{
	/*清屏*/
	system("cls");

	//TODO:在控制台上打印棋盘

}

int Board::drop_piece(int x, int y)
{
	//判定出界
	if (x < 0 || y < 0 || x >= BORDER_SIZE || y >= BORDER_SIZE){
		return OUT_RANGE_ERR;
	}
	//判定重复落子
	if (this->board[y][x] != BLANK){
		return MULTI_DROP_ERR;
	}
	this->board[y][x] = this->current_player;


	//TODO：判定是否连成五子，成功则返回当前玩家编号，否则返回0并切换当前玩家

}

#endif