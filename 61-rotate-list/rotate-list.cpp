/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode* reverse(ListNode* head,int times){
  ListNode* prev = nullptr;
  ListNode* curr = head;
  
  while(times-- && curr){
    ListNode* next  = curr->next;
    curr->next =prev;
    prev = curr;
    curr = next;
  }
  head->next = curr;
  return prev;
}
int len(ListNode* head) {
    ListNode* temp = head;
    int count = 0;
    while (temp) {
        temp = temp->next;
        count++;
    }
    return count;
}
    ListNode* rotateRight(ListNode* head, int k) {
       
        if(head == NULL || head->next == NULL) return head;
         int n = len(head);
        k = k%n;
        if(k == 0) return head;
        
        head = reverse(head,n);
        ListNode* firstTail = head; 

        head = reverse(head,k);
        ListNode* second = firstTail->next;
          
         second = reverse(second,n - k);
         firstTail->next = second;

        return head;
    }
   
};