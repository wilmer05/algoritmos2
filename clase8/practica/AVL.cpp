#include<iostream>
#include<algorithm>
#include<vector>
#include <cstdlib>     /* srand, rand */
#include <ctime>

using namespace std;

struct AVLNode {
        int h;
        int v;
        AVLNode *left;
        AVLNode *right;
        // AVLNode *dad;

        AVLNode(int height, int val) : h(height), v(val) {
                left = right = nullptr;
        }
};

int height(AVLNode *n) {
        return n == nullptr ? -1 : n -> h;
}

void update_height(AVLNode *n) {
        if(n != nullptr) {
                n->h = 1 + max(height(n->left), height(n->right));
        }
}

int balance_factor(AVLNode *n) {
        return height(n -> right) - height(n -> left);
}

AVLNode *rotate_right(AVLNode *old_root) {

        assert(old_root->left != nullptr);
        AVLNode *new_root = old_root->left;
        AVLNode *node_c = new_root -> right;

        new_root -> right = old_root;
        old_root -> left = node_c;
        update_height(old_root);
        update_height(new_root);
        // new_root -> dad = old_root -> dad;
        // old_root->dad = new_root;

        return new_root;
}

AVLNode *rotate_left(AVLNode *old_root) {

        assert(old_root->right != nullptr);
        AVLNode *new_root = old_root->right;
        AVLNode *node_c = new_root -> left;

        new_root -> left = old_root;
        old_root -> right = node_c;
        update_height(old_root);
        update_height(new_root);
        // new_root -> dad = old_root -> dad;
        // old_root->dad = new_root;

        return new_root;
}

AVLNode *rotate_left_right(AVLNode *root) {
        rotate_left(root->left);
        return rotate_right(root);
}

AVLNode *rotate_right_left(AVLNode *root) {
        rotate_right(root->right);
        return rotate_left(root);
}

AVLNode *balance(AVLNode *root) {
        if (root == nullptr ) {
                return root;
        } 

        if (balance_factor(root) > 1) {
                if(height(root->right) > height(root->left)) {
                        root = rotate_left(root);
                } else {
                        root = rotate_right_left(root);
                }
        } else if(balance_factor(root) < -1) {
                if(height(root->left) > height(root->right)) {
                        root = rotate_right(root);
                } else {
                        root = rotate_left_right(root);
                }               
        }

        update_height(root);
        return root;
}

AVLNode *insert(AVLNode *root, int val) {
        if( root == nullptr ) {
                return new AVLNode(0, val);
        } 

        if( val < root->v ) {
                root->left = insert(root->left, val);
        }

        if( val > root->v ) {
                root -> right = insert(root->right, val);
        }

        return balance(root);
}


int main() {

        srand (time(NULL));

        AVLNode *root = nullptr;

        for(int i =0 ; i < 1024; i++) {
                int r = rand() % 100000;
                cout << "Insert r: " << r << endl;
                // r = i;
                root = insert(root, r);
                cout << i << " " << height(root) << endl;
        }

        return 0;
}
