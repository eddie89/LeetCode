/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        map<int, ListNode*> nodeMap;
        ListNode* currentNode = head;
        do{
            nodeMap.insert({count, currentNode});
            currentNode = currentNode -> next;
            count++;
        }
        while(currentNode != NULL);
        if(count % 2 == 0) {
            head = nodeMap.at(count / 2);
        } else {  
            if(count == 1) {
                head = nodeMap.at(0);
            } else {
                head = nodeMap.at((count / 2));
            }
        }
     return head;
    }
};