   bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        ListNode *fast = head->next;
        ListNode *slow = head->next;
        while(fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
            return true;
        }
        return false;        
    }
