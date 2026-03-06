class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* hienTai = head;
        
        while (hienTai != nullptr && hienTai->next != nullptr) {
            if (hienTai->val == hienTai->next->val) {
                hienTai->next = hienTai->next->next;
            } else {
                hienTai = hienTai->next;
            }
        }
        
        return head;
    }
};