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
        if(k==0) return head;
        ListNode* curr = head;
        
        while(curr->next){
            curr = curr->next; 
        }
        curr->next = head;

int times = n - k -1;
ListNode* temp = head;
       while(times--){
         temp = temp->next;
       }
       ListNode* ans  = temp->next;
       temp->next = nullptr;
       return ans;
    }
};