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
    
    long reverse(long x) {
        long res = 0;
        if(x != 0) {
            while(x != 0) {
                res = res*10 + x % 10;
                x = x / 10;
            }
        }
        return(res);
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int x = 0;
        long int first_node = 0;
        long int second_node = 0;
        //Loop 
        while(l1 != nullptr || l2 !=  nullptr) {
            if(l1 != nullptr) {
                first_node = first_node * 10 + l1->val;
                l1 = l1->next;
            }
            
            if(l2 != nullptr) {
                second_node = second_node * 10 + l2->val;
                l2 = l2->next;
            }
            x += 1;
        }
        //Total value
        
        std::cout << "First node: " << reverse(first_node) << std::endl;
        std::cout << "Second node: " << reverse(second_node) << std::endl;
        long int_output = reverse(first_node) + reverse(second_node);
        std::cout << int_output << std::endl;
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
