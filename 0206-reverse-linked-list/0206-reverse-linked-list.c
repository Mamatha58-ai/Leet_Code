/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev=NULL,*current=NULL ,*next=NULL;
    current = head;
    while(current!=NULL){
     next = current->next ;
    current->next = prev;
    prev = current;
    current = next ;
    }
    return prev;
}