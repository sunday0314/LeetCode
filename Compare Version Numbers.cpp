vector<int> SliceToInt(const string str, const string delim)
{
	vector<int> vNum;
	size_t nStart = 0;
	size_t nPos = str.find(delim);
	while (nPos != string::npos)
	{
		int n = atoi(str.substr(nStart, nPos).c_str());
		vNum.push_back(n);
		nStart = nPos+1;
		nPos = str.find(delim, nPos+1);
	}
	vNum.push_back(atoi(str.substr(nStart, nPos).c_str()));
	return vNum;
}
int compareVersion(string version1, string version2) {
	if (version1.empty() || version2.empty())
		return 0;
	vector<int> vVersion1 = SliceToInt(version1, ".");
	vector<int> vVersion2 = SliceToInt(version2, ".");
	for (size_t i = vVersion1.size()-1; i >= 0; i--)
	{
		if (vVersion1[i] == 0)
			vVersion1.pop_back();
		else
			break;
	}
	for (size_t i = vVersion2.size()-1; i >= 0; i--)
	{
		if (vVersion2[i] == 0)
			vVersion2.pop_back();
		else
			break;
	}
	for (size_t i = 0; i < vVersion1.size() && i < vVersion2.size(); i++)
	{
		if (vVersion1[i] > vVersion2[i])
			return 1;
		else if (vVersion1[i] < vVersion2[i])
			return -1;
	}
	if (vVersion1.size() > vVersion2.size())
		return 1;
	else if (vVersion1.size() < vVersion2.size())
		return -1;
	return 0;
}