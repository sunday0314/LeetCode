ListNode* GetMid(ListNode* head)
{
	if (!head || !head->next)
		return head;
	ListNode* pSlow = head;
	ListNode* pFast = head->next;
	while (pFast != NULL)
	{
		if (pFast->next)
			pFast = pFast->next->next;
		else
			break;
		pSlow = pSlow->next;
	}
	return pSlow;
}
ListNode* MergeList(ListNode* head1, ListNode* head2)
{
	if (!head1)
		return head2;
	if (!head2)
		return head1;
	if (head1 == head2)
		return head1;
	ListNode* pNode1 = head1;
	ListNode* pNode2 = head2;
	ListNode* pNode = NULL;
	ListNode* pHead = NULL;
	while (pNode1 && pNode2)
	{
		if (pNode1->val < pNode2->val)
		{
			if (pNode)
			{
				pNode->next = pNode1;
				pNode = pNode->next;
			}
			else
			{
				pNode = pNode1;
				pHead = pNode;
			}
			pNode1 = pNode1->next;
		}
		else 
		{
			if (pNode)
			{
				pNode->next = pNode2;
				pNode = pNode->next;
			}
			else
			{
				pNode = pNode2;
				pHead = pNode;
			}
			pNode2 = pNode2->next;
		}
	}
	while (pNode1)
	{
		pNode->next = pNode1;
		pNode = pNode->next;
		pNode1 = pNode1->next;
	}
	while (pNode2)
	{
		pNode->next = pNode2;
		pNode = pNode->next;
		pNode2 = pNode2->next;
	}
	return pHead;
}
ListNode *sortList(ListNode *head) {
	if (!head || !head->next)
		return head;
	ListNode* pMid = GetMid(head);
	ListNode* pTmp = pMid->next;
	pMid->next = NULL;
	ListNode* pNode1 = sortList(head);
	ListNode* pNode2 = sortList(pTmp);
	return MergeList(pNode1, pNode2);
}