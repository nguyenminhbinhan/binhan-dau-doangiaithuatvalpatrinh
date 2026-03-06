class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr) return false;
        
        ListNode* cham = head;
        ListNode* nhanh = head;
        
        while (nhanh != nullptr && nhanh->next != nullptr) {
            cham = cham->next;
            nhanh = nhanh->next->next;
            
            if (cham == nhanh) return true;
        }
        
        return false;
    }
};