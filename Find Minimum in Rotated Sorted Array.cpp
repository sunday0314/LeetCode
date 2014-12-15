int findMin(vector<int> &num) {
	if (num.empty())
		return -1;
	int nResult = -1;
	size_t i = 0;
	bool bFind = false;
	for (; i < num.size()-1; i++)
	{
		if (num[i] > num[i+1])
		{
			bFind = true;
			break;
		}
	}
	if (bFind)
	{
		if (num[0] < num[i+1])
			return num[0];
		else 
			return num[i+1];
	}
	else 
		return num[0];
}