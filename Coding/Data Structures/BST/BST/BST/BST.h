#ifndef BST_H
#define BST_H

class BST {

private:
	struct node {
		int key;
		node* left;
		node* right;
	};

	node* root;

	node* CreateLeaf(int key);
	void AddLeafPrivate(int key, node* n);

public:
	BST();
	~BST();
	void AddLeaf(int key);
};



#endif // BST_H
