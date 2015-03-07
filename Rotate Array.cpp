void rotate(int nums[], int n, int k) {
	if (n <= 0 || k <= 0)
		return;
	k = k % n;
	int* tmp = new int[n-k];
	for (int i = 0; i < n-k; i++)
		tmp[i] = nums[i];
	for (int i = 0; i < k; i++)
		nums[i] = nums[n-k+i];
	for (int i = k,j = 0; i < n && j < n-k; i++,j++)
		nums[i] = tmp[j];
	delete []tmp;
}