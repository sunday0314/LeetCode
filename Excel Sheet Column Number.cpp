int titleToNumber(string s) {
	int nResult = 0;
	if (s.empty() || s == "")
		return nResult;
	int nValue = 1;
	for (int i = s.size()-1 ; i >= 0; i--)
	{
		nResult += (s[i]-'A'+1) * nValue;
		nValue *= 26;
	}
	return nResult;
}