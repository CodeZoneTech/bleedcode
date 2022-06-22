// #include <iostream>
// #include <vector>
//
// typedef std::vector<std::vector<int>> Board;
//
//
// void solve(int size);
// bool solveUtil(Board& board, int col, int size);
// void printSolution(Board& board);
// bool isSafe(Board& board, int row, int col, int size);
//
//
// int main()
// {
// 	int size;
//
// 	std::cin >> size;
//
// 	solve(size);
//
// 	return 0;
// }
//
// void solve(int size)
// {
// 	Board board(size, std::vector<int>(size, 0));
//
// 	if (solveUtil(board, 0, size) == false)
// 	{
// 		std::cout << "Solution does not exist";
// 	}
// 	else printSolution(board);
//
// }
//
// bool solveUtil(Board& board, int col, int size)
// {
// 	if(col >= size) return true;
//
// 	for(int i = 0; i < size; i++)
// 	{
// 		if (isSafe(board, i, col, size))
// 		{
// 			board[i][col] = 1;
//
// 			if (solveUtil(board, col + 1, size) == true) return true;
//
// 			board[i][col] = 0;
// 		}
// 	}
//
// 	return false;
// }
//
// void printSolution(Board& board)
// {
// 	for (auto row : board)
// 	{
// 		for (int cell : row)
// 		{
// 			std::cout << cell << " ";
// 		}
// 		std::cout << std::endl;
// 	}
// }
//
// bool isSafe(Board& board, int row, int col, int size)
// {
// 	int i, j;
//
// 	for (i = 0; i < col; i++) if (board[row][i]) return false;
// 	for (i = row, j = col; i >= 0 && j >= 0; i--, j--) if (board[i][j])	return false;
// 	for (i = row, j = col; j >= 0 && i < size; i++, j--) if (board[i][j]) return false;
//
// 	return true;
// }
//
//
