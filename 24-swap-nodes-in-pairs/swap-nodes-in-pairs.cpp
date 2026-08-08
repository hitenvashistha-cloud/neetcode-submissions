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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* prev  = nullptr;
        ListNode* curr = head;
        while(curr && curr->next){
            ListNode* next  = curr->next->next;
            ListNode* second = curr->next;

            second->next = curr;
            curr->next = next;

            if(prev){
                prev->next = second;
            }else{
                head = second;
            }
            prev = curr;
            curr= next;
        }
        return head;
    }
};