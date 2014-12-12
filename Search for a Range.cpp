int binarySearch(int A[], int target, int left, int right)
{
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
vector<int> searchRange(int A[], int n, int target) {
	vector<int> vResult;
	int nPos = binarySearch(A, target, 0, n-1);
	if (nPos < 0)
	{
		vResult.push_back(-1);
		vResult.push_back(-1);
	}
	else
	{
		int nBegin = nPos;
		int nEnd = nPos;
		for (int i = nPos-1; i >= 0 ; i--)
		{
			if (A[i] == target)
				nBegin = i;
		}
		for (int i = nPos+1; i < n; i++)
		{
			if (A[i] == target)
				nEnd = i;
		}
		vResult.push_back(nBegin);
		vResult.push_back(nEnd);
	}
	return vResult;
}