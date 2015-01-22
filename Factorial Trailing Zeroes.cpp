//2的数量肯定大于5的数量，因此就是找5的数量
//还有25、125、625等等
int trailingZeroes(int n) {
	int nResult = 0;
	while (n)
	{
		nResult += n/5;
		n /= 5;
	}
	return nResult;
}