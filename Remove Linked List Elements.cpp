ListNode* removeElements(ListNode* head, int val) {
	if(!head)
		return NULL;

	ListNode* pHead = head;
	ListNode* pNode = head;
	ListNode* pBefore = NULL;
	while (pNode)
	{
		if (pNode->val == val)
		{
			if (pNode->next)
			{
				ListNode* pNext = pNode->next;
				if (pBefore)
				{
					pBefore->next = pNext;
				}
				else
				{
					pHead = pNext;
				}
				pNode->next = NULL;
				pNode = pNext;
			}
			else
			{
				if (!pBefore)
					return NULL;
				pBefore->next = NULL;
				break;
			}
		}
		else
		{
			pBefore = pNode;
			pNode = pNode->next;
		}
	}
	return pHead;
}