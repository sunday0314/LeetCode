void deleteNode(ListNode* node) {
	if (!node)
		return;
	ListNode* pNext = node->next;
	node->next = pNext->next;
	node->val = pNext->val;
}