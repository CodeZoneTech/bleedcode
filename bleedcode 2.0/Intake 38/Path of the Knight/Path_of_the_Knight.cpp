// #include <iostream>
// #include <vector>
//
//
// typedef std::vector<std::vector<int>> Board;
//
// bool solveKTUtil(int n, Board& board, int current_x, int current_y, std::vector<int> move_x, std::vector<int> move_y, int pos);
// bool isSafe(int x, int y, int n, const Board& board);
// void printSolution(int n, Board board);
//
//
// int main()
// {
//     int n;
//     std::cin >> n;
//
//     solveKT(n);
//
//     return 0;
// }
//
//
// void solveKT(const int n)
// {
// 	Board board(n, std::vector<int>(n, -1));
//
// 	std::vector<int> move_x{ 2, 1, -1, -2, -2, -1, 1, 2 };
// 	std::vector<int> move_y{ 1, 2, 2, 1, -1, -2, -2, -1 };
//
// 	board[0][0] = 0;
//
// 	int pos = 1;
//
// 	if (!solveKTUtil(n, board, 0, 0, move_x, move_y, pos))
// 	{
// 		std::cout << "Solution does not exists";
//
// 	}
// 	else
// 	{
// 		printSolution(n, board);
// 	}
// }
//
// bool solveKTUtil(int n, Board& board, int current_x, int current_y, std::vector<int> move_x, std::vector<int> move_y, int pos)
// {
// 	if (pos == std::pow(n, 2)) return true;
//
// 	for (int i = 0; i < 8; i++)
// 	{
// 		int new_x = current_x + move_x[i];
// 		int new_y = current_y + move_y[i];
//
// 		if (isSafe(new_x, new_y, n, board))
// 		{
// 			board[new_x][new_y] = pos;
// 			if (solveKTUtil(n, board, new_x, new_y, move_x, move_y, pos + 1)) return true;
// 			board[new_x][new_y] = -1;
// 		}
// 	}
//
// 	return false;
// }
//
//
// bool isSafe(int x, int y, int n, const Board& board)
// {
// 	if ((x >= 0) && (y >= 0) && (x < n) && (y < n) && (board[x][y] == -1)) return true;
// 	return false;
// }
//
//
// void printSolution(int n, Board board)
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
//
