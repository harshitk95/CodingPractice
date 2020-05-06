#include <iostream>
#include <cstdlib>
#include "BST.h"

BST::BST() {
	root = NULL;
}

BST::~BST() {

}

BST::node* BST::CreateLeaf(int key) {
	node* n = new node;
	n->key = key;
	n->left = NULL;
	n->right = NULL;

	return n;
}

void BST::AddLeaf(int key) {
	AddLeafPrivate(key, root);
}

void BST::AddLeafPrivate(int key, node* n) {
	if (n == NULL) {
		CreateLeaf(key);
	}
	else if (key < n->key) {

	}
}