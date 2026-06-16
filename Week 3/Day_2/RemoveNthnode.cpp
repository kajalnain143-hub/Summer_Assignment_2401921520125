   #include <iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
    ListNode(int val) {
        data = val;
        next = NULL;
    }
};
 ListNode* removeNthFromEnd(ListNode* head, int n) {

        int cnt = 0;
        ListNode* temp = head;

        // Length count
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        temp = dummy;

        // temp ko delete hone wali node ke previous node tak le jao
        for (int i = 0; i < cnt - n; i++) {
            temp = temp->next;
        }

        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;

        return dummy->next;
    }
     void printList(ListNode* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* lL = new ListNode(1);
    lL->next = new ListNode(3);
    lL->next->next = new ListNode(5);
       int n =2;

    ListNode* result = removeNthFromEnd(lL,n);

    cout << "Updated List: ";
    printList(result);

    return 0;
}