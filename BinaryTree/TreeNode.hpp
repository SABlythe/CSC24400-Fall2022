#ifndef _TREE_NODE_HPP_
#define _TREE_NODE_HPP_

#include <iostream>
#include <string>

class TreeNode
{
private:
	std::string _element;
	TreeNode *_left;
	TreeNode *_right;
	TreeNode *_parent;		
public:	
	TreeNode(const std::string &data);
	
	// accessors & modifiers
	
	bool isLeaf() const;
	unsigned int depth() const;
};

#endif







