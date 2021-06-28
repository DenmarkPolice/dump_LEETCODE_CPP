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
        //std::cout << l1->val << std::endl;
        int x = 0;
        int first_node = 0;
        int second_node = 0;
        while(l1 != nullptr || l2 !=  nullptr) {
            int upphojt = int(pow(10,x));
            if(l1 != nullptr) {
                first_node += l1->val*upphojt;
            }
            
            if(l2 != nullptr) {
                second_node += l2->val*upphojt;
            }
            l1 = l1->next;
            l2 = l2->next;
            x += 1;
        }
        int int_output = first_node + second_node;
        std::cout << int_output << std::endl;
        std::cout << int(int_output/(pow(10,x)/10)) << std::endl;
        ListNode last_node = ListNode(int(int_output/(pow(10,x)/10)));
        ListNode* last_ptr = &last_node;
        x -= 1;
        
        while(x != 0) {
            
        }
        std::cout << last_ptr->val << std::endl;
        return(l1);
    }
};
