bool Detect(ListNode* head)
{
ListNode* slow = head;
ListNode* fast = head;

  while(slow!=NULL && fast!=NULL){
    if(slow==fast) return true;
    slow = slow->next;
    fast = fast->next->next;
  }
  return false;
}
