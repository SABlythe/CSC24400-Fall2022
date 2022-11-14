#ifndef _BINARY_TREE_HPP_
#define _BINARY_TREE_HPP_

#include <iostream>

#include "TreeNode.hpp"

class BinaryTree
{
private:
	TreeNode *_root;
public:
	BinaryTree(): _root(NULL) {}
	
	TreeNode *find(const std::string &findMe) const;
	
	void insert(const std::string &valueToAdd);
	// will add remove later
	
	friend std::ostream& operator<<(std::ostream &os, const BinaryTree &bt);
};

#endif
