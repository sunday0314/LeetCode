ListNode *reverseKGroup(ListNode *head, int k) {
	if (!head || !head->next)
		return head;
	int nCount = 0;
	ListNode* pNode = head;
	ListNode* pHead = NULL;
	while (pNode)
	{
		pNode = pNode->next;
		nCount++;
	}
	if (k > nCount)
		return head;
	pNode = head;

	ListNode* pGroupHead = NULL;//ÿ�鿪ʼʱ��ͷ�ڵ�,����ʱ��β�ڵ�
	ListNode* pGroupTail = NULL;//��һ���β�ڵ�
	while(pNode && nCount >= k)
	{
		pGroupHead = pNode;
		ListNode* pLast = NULL; //��һ���ڵ�
		ListNode* pTmp = NULL;
		for (int i = 0; i < k; i++)
		{
			if (pLast)
			{
				pTmp = pNode->next;
				pNode->next = pLast;
				pLast = pNode;
				pNode = pTmp;
			}
			else
			{
				pLast = pNode;
				pNode = pNode->next;
				pLast->next = NULL;
			}
		}
		if (!pHead)
			pHead = pLast;
		if (pGroupTail)
			pGroupTail->next = pLast;
		pGroupTail = pGroupHead;
		nCount -= k;
	}
	if (pNode)
		pGroupTail->next = pNode;
	return pHead;
}