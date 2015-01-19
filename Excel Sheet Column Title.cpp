string convertToTitle(int n) {
	string result;
	if (n <= 0)
		return result;
	int nValue = 26;
	while (n > 0)
	{
		char c = n%nValue == 0 ? 'Z' : n%nValue+'A'-1;
		result.insert(result.begin(), c);
		if (n <= nValue)
			break;
		else
			n = (n-(c-'A'+1))/nValue;
	}
	return result;
}