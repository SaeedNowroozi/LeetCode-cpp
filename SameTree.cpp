class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
       if (p == nullptr || q == nullptr) return (p == q);
       if(p->val != q->val) return false;
       auto z = isSameTree(p->right,q->right);
       auto x = isSameTree(p->left,q->left);
       return (z && x);
    }
};
