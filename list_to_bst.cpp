class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (!head) return nullptr;
        return buildBST(head, nullptr);
    }

    TreeNode* buildBST(ListNode* head, ListNode* tail) {
        if (head == tail) return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;

        // find middle node
        while (fast != tail && fast->next != tail) {
            slow = slow->next;
            fast = fast->next->next;
        }

        TreeNode* root = new TreeNode(slow->val);
        root->left = buildBST(head, slow);
        root->right = buildBST(slow->next, tail);

        return root;
    }
};

/*https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/*/


/*Given the head of a singly linked list where elements are sorted in ascending order, convert it to a height-balanced binary search tree.*/