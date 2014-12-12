int binarySearch(vector<int> A, int target)
{
	int left = 0;
	int right = A.size()-1;
	while (left <= right)
	{
		int nMiddle = (left+right)/2;
		if (A[nMiddle] < target)
		{
			left = nMiddle+1;
		}
		else if (A[nMiddle] > target)
		{
			right = nMiddle-1;
		}
		else
			return nMiddle;
	}
	return -1;
}
bool searchMatrix(vector<vector<int> > &matrix, int target) {
	int nLine = 0;
	for (size_t i = 0; i < matrix.size(); i++)
	{
		if (matrix[i][0] <= target && matrix[i][matrix[i].size()-1] >= target)
		{
			nLine = i;
			break;
		}
	}
	if (binarySearch(matrix[nLine], target) < 0)
		return false;
	else
		return true;
}