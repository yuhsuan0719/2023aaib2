/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    int a[100001], N=0; //�}�C�̤j10�U�ӡA���n�b�[1
    while(head!=NULL){
        a[N++] = head -> val;
        head = head -> next;
    }
    for(int i=0; i<N/2; i++){
        if(a[i] != a[N-1-i]) return false;
    }
    return true;
}
