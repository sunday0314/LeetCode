int minPathSum(vector<vector<int> > &grid) {
	if (grid.size() == 0)
		return 0;
	int m = grid.size();
	int n = grid[0].size();
	vector<int> v(n + 1, INT_MAX); 
	v[1] = 0;
	for (size_t i = 0; i < m; i++)
		for (size_t j = 0; j < n; j++)
			v[j + 1] = grid[i][j] + min(v[j+1], v[j]);
	return v.back(); 
}