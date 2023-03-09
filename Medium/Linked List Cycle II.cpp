/* Approach:
1. Using Hashing we can mark the visited node as true, and when we find the node
is already visited or it is NULL, we can return the node.
2. Using Floyd's Tortoise and Hare algorithm.
    In this, we use two pointer, slow and fast pointers.
    If there is a cycle, it is must that they will meet.
    At every cycle, the distance between slow and fast would decrease by one,
    which is better than using memory.
3. I thought just finding the cycle and return that pointer would give the ans,
    but they might meet a very point, and not the start of the cycle.
4. To get the start:
    We know that fast is moving at double speed, therefore the fast has travelled twice as much as slow.
    Initialize slow as head and move both slow and fast by one.

*/
ListNode *detectCycle(ListNode *head) {
    /*
    unordered_map<ListNode*, bool> visited;
    ListNode *temp = head;
    while (temp != NULL and !visited[temp]) {
        visited[temp] = true;
        temp = temp->next;
    }
    return temp;
    */
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}