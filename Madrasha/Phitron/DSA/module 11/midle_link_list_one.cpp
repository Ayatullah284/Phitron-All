// .1
// class Solution {
// public:
//     int size(ListNode* head){
//         ListNode* tmp=head;
//         int cnt=0;
//         while(tmp!=NULL){
//             cnt++;
//             tmp=tmp->next;
//         }
//         return cnt;
//     }
//     ListNode* middleNode(ListNode* head) {
//         int sz=size(head);
//         ListNode* tmp=head;
//         for(int i=1; i<=sz/2; i++){
//             tmp=tmp->next;
//         }
//         return tmp;
//     }
// };


// 2.
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow=head;
//         ListNode* first=head;
//         while(first!=NULL&&first->next!=NULL){
//             slow=slow->next;
//             first=first->next->next;
//         }
//         // cout<<slow->val<<endl;
//         return slow;
//     }
// };