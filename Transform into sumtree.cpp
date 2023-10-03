class Solution {
    private:
    int subSum(Node *root){
        if(!root)
            return 0;
            
        int sum1 = 0;
        int sum2 = 0;
        
        if(root -> left){
            sum1 = root -> left -> data;
            root -> left -> data = subSum(root -> left);
            sum1 += root -> left -> data;
        }
        if(root -> right){
            sum2 = root -> right -> data;
            root -> right -> data = subSum(root -> right);
            sum2 += root -> right -> data;
        }
        
        root -> data = sum1+sum2;
        
        return sum1+sum2;
    }
    
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        // Your code here
        subSum(node);
    }
};
