class Codec {
public:
    void preorder(TreeNode* root, string& s) {
        if (root == NULL) {
            s = s + "N,";
            return;
        }
        s += to_string(root->val) + ",";
        preorder(root->left, s);
        preorder(root->right, s);
    }
   TreeNode* build(vector<string>& nodes, int &i){

    if(nodes[i] == "N"){
        i++;
        return NULL;
    }

    TreeNode* root = new TreeNode(stoi(nodes[i]));
    i++;

    root->left = build(nodes, i);
    root->right = build(nodes, i);

    return root;
}
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s;
        preorder(root, s);
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string> nodes;
        string curr = "";

        for (char c : data) {
            if (c == ',') {
                nodes.push_back(curr);
                curr = "";
            } else {
                curr += c;
            }
        }

        int i = 0;
        return build(nodes, i);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));