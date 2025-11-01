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
class Solution {
public:
    // bool check(vector<int>& a, ListNode* head) {
    //     //check wether a,head are matching
    //     int n = a.size();
    //     while(head != NULL) {
    //     bool found = false;
    //     for(int i = 0; i < n; i++) {
    //         if(head->val == a[i]) {
    //             found = true;
    //             break;
    //         }
    //     }
    //     }
    //     return found;
    // }
    ListNode* modifiedList(vector<int>& a, ListNode* head) {
        int n = a.size();
        unordered_set<int>st(a.begin(), a.end());
        while(head!=NULL && st.find(head->val)!=st.end()){
            head = head->next;
        }
        if(head == NULL)    return head;
        ListNode* curr = head;
        while(curr != NULL && curr->next!=NULL){
            if(st.find(curr->next->val)!=st.end())
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }return head;
        }
};
//BF: 
// find a[i] in linkedlist
// remove that head node for first time and check head is null return null meaning it is 1st ele in both
// now find the other head->next->val is target eleminate such that for entire linked list
/*for(int i = 0; i < n; i++) {   
        // Remove all occurrences of target from linked list
        // Remove from beginning if head matches
        while(head != NULL && head->val == a[i]) {
            ListNode* temp = head;
            head = head->next;
        }
        if(head == NULL) return NULL;
        ListNode* curr = head;
        while(curr != NULL && curr->next != NULL){
            if(curr->next->val == a[i]){
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                
            }
            else{
                curr = curr->next;
            }
        }
    }
    return head;
    }*/
//Optimised: store a in set & scan linkedlist
