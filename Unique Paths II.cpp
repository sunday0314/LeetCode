int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
	if (obstacleGrid.empty() || obstacleGrid[0].empty() || obstacleGrid[0][0] == 1)
		return 0;
	int m = obstacleGrid.size();
	int n = obstacleGrid[0].size();
	if (m == 1)
	{
		for (size_t i = 0; i < obstacleGrid[0].size(); i++)
			if (obstacleGrid[0][i] == 1)
				return 0;
	}
	if (n == 1)
	{
		for (size_t i = 0; i < obstacleGrid.size(); i++)
			if (obstacleGrid[i][0] == 1)
				return 0;
	}
	int v[100][100];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
				v[i][j] = 0;
	v[0][0] = 1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (obstacleGrid[j][i] == 0)
			{
				if (j > 0 && i > 0)
					v[j][i] = v[j-1][i] + v[j][i-1];
				else if (j > 0)
					v[j][i] = v[j-1][i];
				else if (i > 0)
					v[j][i] = v[j][i-1];
			}
			else
				v[j][i] = 0;
	return v[m-1][n-1];
}