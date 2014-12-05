int searchInsert(int A[], int n, int target) {
	int nLeft = 0;
	int nRight = n-1;
	while (nLeft <= nRight)
	{
		int nMiddle = (nLeft+nRight)/2;
		if (A[nMiddle] < target)
		{
			if (nLeft == n-1)
				return n;
			nLeft = nMiddle+1;
		}
		else if (A[nMiddle] > target)
		{
			if (nRight == 0)
				return 0;
			nRight = nMiddle-1;
		}
		else
			return nMiddle;
	}
	return nLeft;
}