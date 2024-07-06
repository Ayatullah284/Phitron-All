// class Solution {
// public:
//     // Due
//     ListNode* swapNodes(ListNode* head, int k) {
//         if(head==NULL)return NULL;
//         ListNode* countptr=head;
//         int count=0;
//         while(countptr!=NULL){
//             count++;
//             countptr=countptr->next;
//         }
//         int last=count-k+1;
//         int i=1 ,j=1;
//         ListNode* first=head;
//         ListNode* second=head;
//         while(1){
//             if(i!=k){
//                 first=first->next;
//                 i++;
//             }
//             if(j!=last){
//                 second=second->next;
//                 j++;
//             }
//             if(i==k && j==last)break;
//         }
//         swap(first->val,second->val);
//         return head;
//     }
// }; 