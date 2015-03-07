int uniquePaths(int m, int n) {
	if (m <= 0 && n <= 0)
		return 0;
	if (m==1 || n==1)
		return 1;
	vector<int> v(m+1, 0); 
	v[1] = 1;
	for (int i = 0; i < n; i++)
		for (int j = 1; j <= m; j++)
			v[j] = v[j] + v[j-1];
	return v[m]; 
}