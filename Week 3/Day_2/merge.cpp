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
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        while(list1!=NULL && list2!=NULL){
            if(list1->data<=list2->data){
                tail->next = list1;
                list1=list1->next;
            }
            else{
               tail->next = list2;
                list2=list2->next; 
            }
            tail = tail->next;
        }
        if(list1!=NULL){
            tail->next = list1;
        }
        else{
            tail->next = list2;
        }
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
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(5);

    ListNode* l2 = new ListNode(2);
    l2->next = new ListNode(4);
    l2->next->next = new ListNode(6);

    ListNode* result = mergeTwoLists(l1, l2);

    cout << "Merged List: ";
    printList(result);

    return 0;
}