bool isValidSudoku(vector<vector<char> > &board) {
	//size check
	if (board.size() != 9)
		return false;
	for (size_t i = 0; i < board.size(); i++)
	{
		if (board[i].size() != 9)
			return false;
	}
	//line check
	for (size_t i = 0; i < board.size(); i++)
	{
		vector<char> line = board[i];
		vector<char> check;
		for (size_t j = 0; j < line.size(); j++)
		{
			if ((line[j] < '1' || line[j] > '9') && (line[j] != '.'))
				return false;
			if (find(check.begin(), check.end(), line[j]) != check.end() && line[j] != '.')
				return false;
			check.push_back(line[j]);
		}
	}
	//row check
	for (size_t j = 0; j < board.size(); j++)
	{
		vector<char> check;
		for (size_t i = 0; i < board.size(); i++)
		{
			if (find(check.begin(), check.end(), board[i][j]) != check.end() && board[i][j] != '.')
				return false;
			check.push_back(board[i][j]);
		}
	}
	//block check
	int line = 0;
	int row = 0;
	for (; line < 3; line++)
	{
		row = 0;
		for (; row < 3; row++)
		{
			vector<char> check;
			for (size_t i = 0; i < 3; i++)
			{
				for (size_t j = 0; j < 3; j++)
				{
					if (find(check.begin(), check.end(), board[line*3+i][row*3+j]) != check.end() && board[line*3+i][row*3+j] != '.')
						return false;
					check.push_back(board[line*3+i][row*3+j]);
				}
			}
		}
	}
	return true;
}