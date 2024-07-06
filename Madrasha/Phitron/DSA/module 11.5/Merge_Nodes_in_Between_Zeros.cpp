// class Solution {
// public:
//     // Due
//     ListNode* mergeNodes(ListNode* head) {
//         head = head->next;
//         ListNode* sumNode = head;
//         ListNode* it = head;

//         while (it != NULL) {
//             int sum = 0;
//             while (it != NULL && it->val != 0) {
//                 sum += it->val;
//                 it = it->next;
//             }

//             sumNode->val = sum;
//             sumNode->next = it->next;
//             sumNode = it->next;
//             it = it->next;
//         }
//         return head;
//     }
// }; 