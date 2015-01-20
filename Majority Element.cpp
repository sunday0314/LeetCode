int majorityElement(vector<int> &num) {
	int nSize = num.size();
	map<int, int> mapResult;
	for (int i = 0; i < nSize; i++)
		mapResult[num[i]] += 1;
	for (map<int, int>::iterator it = mapResult.begin(); it != mapResult.end(); it++)
	{
		if(it->second > nSize/2)
			return it->first;
	}
	return 0;
}