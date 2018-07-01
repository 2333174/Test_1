
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
	/*����*/
	system("cls");

	//TODO:�ڿ���̨�ϴ�ӡ����

}

int Board::drop_piece(int x, int y)
{
	//�ж�����
	if (x < 0 || y < 0 || x >= BORDER_SIZE || y >= BORDER_SIZE){
		return OUT_RANGE_ERR;
	}
	//�ж��ظ�����
	if (this->board[y][x] != BLANK){
		return MULTI_DROP_ERR;
	}
	this->board[y][x] = this->current_player;


	//TODO���ж��Ƿ��������ӣ��ɹ��򷵻ص�ǰ��ұ�ţ����򷵻�0���л���ǰ���

}

#endif