int findPeakElement(const vector<int> &num) {
	int left = 0;
	int right = num.size()-1;
	while (left <= right)
	{
		int nMiddle = (left+right)/2;
		if (nMiddle > 0 && nMiddle < num.size()-1 && num[nMiddle] > num[nMiddle-1] && num[nMiddle] > num[nMiddle+1])
			return nMiddle;
		if (nMiddle-1 >= 0 && num[nMiddle] < num[nMiddle-1])
		{
			right = nMiddle-1;
		}
		else if (nMiddle < num.size() -1 && num[nMiddle] < num[nMiddle+1])
		{
			left = nMiddle+1;
		}
		else
			return nMiddle;
	}
	return -1;
}