/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <cmath>
#include <iostream>  
#include <typeinfo>
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int x = 0;
        int first_node = 0;
        int second_node = 0;
        //Loop 
        while(l1 != nullptr || l2 !=  nullptr) {
            int upphojt = int(pow(10,x));
            if(l1 != nullptr) {
                first_node += l1->val*upphojt;
                l1 = l1->next;
            }
            
            if(l2 != nullptr) {
                second_node += l2->val*upphojt;
                l2 = l2->next;
            }
            x += 1;
        }
        //Total value
        int int_output = first_node + second_node;
        
        //Make the first one before the loop so we can save a pointer
        int tmp_val = int_output % 10;
        int_output = int_output / 10;
        ListNode* first = new ListNode(tmp_val);
        ListNode* tmp = first;
        //Loop and make pointers until the the total value is 0
        while(int_output != 0) {
            tmp_val = int_output % 10;
            int_output = int_output / 10;
            tmp->next = new ListNode(tmp_val);
            tmp = tmp->next;
        }
        return(first);
    }
};
