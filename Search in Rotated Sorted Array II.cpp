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
bool search(int A[], int n, int target) {
	int nRotate = 0;
	for (int i = 0; i < n-1 ; i++)
	{
		if (A[i] > A[i+1])
		{
			nRotate = i+1;
			break;
		}
	}
	int nLeft = 0;
	int nRight = n-1;
	if (nRotate != 0)
		nRight = nRotate-1;
	int nResult = binarySearch(A, target, nLeft, nRight);
	if (nResult != -1)
		return true;
	if (nRotate != 0)
	{
		nLeft = nRotate;
		nRight = n-1;
		return binarySearch(A, target, nLeft, nRight) >= 0;
	}
	return false;	
}