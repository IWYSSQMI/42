// #include <unistd.h>
// #include <stdio.h>

// int	board[10][10];
// int	count = 0;

// void	printff(char c)
// {
// 	write(1, &c, 1);
// }

// void print_numkakkak(void)
// {
// 	int i = 0;
// 	while (i < 10)
// 	{
// 		int j = 0;
// 		while (j < 10)
// 		{
// 			if (board[i][j] == 1)
// 			{
// 				printff(j + '0');
// 				break;
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	printff('\n');
// }

// int	dondakmai(int row, int col) 
// {
// 	int	i;

// 	i = 0;
// 	while (i < row)
// 	{
// 		if (board[i++][col] == 1)
// 			return 1;
// 	}
// 	i = row - 1;
// 	int j = col - 1;
// 	while (i >= 0 && j >= 0)
// 	{
// 		if (board[i--][j--] == 1)
// 			return 1;
// 	}
// 	i = row - 1;
// 	j = col + 1;
// 	while (i >= 0 && j < 10)
// 	{
// 		if (board[i--][j++] == 1)
// 			return 1;
// 	}
// 	return 0;
// }

// void	n_queen(int row)
// {
// 	if (row == 10)
// 	{
// 		count++;
// 		print_numkakkak();
// 		return;
// 	}

// 	int col = 0;
// 	while (col < 10)
// 	{
// 		if (dondakmai(row, col) != 1)
// 		{
// 			board[row][col] = 1;
// 			n_queen(row + 1);
// 			board[row][col] = 0;
// 		}
// 		col++;
// 	}
// }

// int	ft_ten_queens_puzzle(void)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (i < 10)
// 	{
// 		j = 0;
// 		while (j < 10)
// 		{
// 			board[i][j] = 0;
// 			j++;
// 		}
// 		i++;
// 	}
// 	n_queen(0);
// 	return count;
// }

// // int main(void)
// // {
// //     int total_solutions;
// //     total_solutions = ft_ten_queens_puzzle();
// //     //printf("Total solutions: %d\n", total_solutions);
// //     return 0;
// // }


#include <unistd.h>
#include <stdio.h>

void printff(char c)
{
	write(1, &c, 1);
}

void print_numkakkak(int board[10][10])
{
	int i = 0;
	while (i < 10)
	{
		int j = 0;
		while (j < 10)
		{
			if (board[i][j] == 1)
			{
				printff(j + '0');
				break;
			}
			j++;
		}
		i++;
	}
	printff('\n');
}

int dondakmai(int board[10][10], int row, int col) 
{
	int i = 0;
	while (i < row)
	{
		if (board[i][col] == 1)
			return 1;
		i++;
	}
	i = row - 1;
	int j = col - 1;
	while (i >= 0 && j >= 0)
	{
		if (board[i][j] == 1)
			return (1);
		i--;
		j--;
	}
	i = row - 1;
	j = col + 1;
	while (i >= 0 && j < 10)
	{
		if (board[i][j] == 1)
			return (1);
		i--;
		j++;
	}
	return (0);
}

void n_queen(int board[10][10], int row, int *count)
{
	if (row == 10)
	{
		(*count)++;
		print_numkakkak(board);
		return;
	}

	int col = 0;
	while (col < 10)
	{
		if (dondakmai(board, row, col) != 1)
		{
			board[row][col] = 1;
			n_queen(board, row + 1, count);
			board[row][col] = 0;
		}
		col++;
	}
}

int ft_ten_queens_puzzle(void)
{
	int board[10][10];
	int i = 0;
	int j;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	int count = 0;
	n_queen(board, 0, &count);
	return (count);
}

// int main(void)
// {
//     int total_solutions;
//     total_solutions = ft_ten_queens_puzzle();
//     printf("Total solutions: %d\n", total_solutions);
//     return 0;
// }