ListNode* reverseList(ListNode* head) {
	if(!head)
		return NULL;
	ListNode* pNext = head->next;
	ListNode* pNode = head;
	head->next = NULL;
	while (pNext)
	{
		ListNode* pTmp = pNext->next;
		pNext->next = pNode;
		pNode = pNext;
		pNext = pTmp;
	}
	return pNode;
}