class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Find length of list
        int n = 1;
        ListNode* curr = head;
        while (curr->next) {
            curr = curr->next;
            n++;
        }

        // Reduce k
        k = k % n;
        if (k == 0) return head;

        // Rotate k times using your logic
        while (k > 0) {
            ListNode* temp = head;
            ListNode* prev = nullptr;

            while (temp->next != nullptr) {
                prev = temp;
                temp = temp->next;
            }

            prev->next = nullptr;
            temp->next = head;
            head = temp;

            k--;
        }
        return head;
    }
};


/*https://leetcode.com/problems/rotate-list/description/?envType=problem-list-v2&envId=two-pointers*/

/*so basically we are using k%n so that instead of whole rotation  we can do it nk%n reminder of k times that way we can get same value as k original times now its just easy to rotate*/