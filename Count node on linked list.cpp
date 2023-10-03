class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
    if(head == NULL){
        return 0;
    }
    int count=0;
    Node* curr = head;
    while(curr != NULL){
        curr = curr -> next;
        count++;
    }
    return count;
    }
};
