ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
	if (!headA || !headB)
		return NULL;
	ListNode* pNodeA = headA;
	ListNode* pNodeB = headB;
	while (pNodeA && pNodeB && pNodeA != pNodeB)
	{
		pNodeA = pNodeA->next;
		pNodeB = pNodeB->next;

		if (pNodeA == pNodeB)
			return pNodeA;
		if (!pNodeA)
			pNodeA = headB;
		if (!pNodeB)
			pNodeB = headA;
	}
	return pNodeA;
}