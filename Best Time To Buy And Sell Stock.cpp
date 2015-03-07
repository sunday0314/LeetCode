int maxProfit(vector<int> &prices) {
	if (prices.size() == 0)
		return 0;
	int nResult = 0;
	int nMin = prices[0];
	for (size_t i = 0; i < prices.size(); i++)
	{
		if (prices[i] - nMin > nResult)
			nResult = prices[i] - nMin;
		else if (prices[i] < nMin)
			nMin = prices[i];
	}
	return nResult;
}