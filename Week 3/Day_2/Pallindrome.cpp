 #include <iostream>
 #include<vector>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
    ListNode(int val) {
        data = val;
        next = NULL;
    }
};
bool isPalindrome(ListNode* head) {
         vector<int> v;

    while (head) {
        v.push_back(head->data);
        head = head->next;
    }

    int i = 0, j = v.size() - 1;

    while (i < j) {
        if (v[i] != v[j])
            return false;
        i++;
        j--;
    }

    return true;
    }
    int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    if (isPalindrome(head))
        cout << "Palindrome Linked List";
    else
        cout << "Not a Palindrome Linked List";

    return 0;
}