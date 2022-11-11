#include "TreeNode.hpp"	
	
bool 
TreeNode::isLeaf() const
{
	return !_right && !_left;
	/*
	if (!_right && !_left)
		return true;
	else
		return false;
	*/	
}


unsigned int 
TreeNode::depth() const
{
	unsigned int ancestorCount=0;
	
	TreeNode *curr = this;  // will fix the error here next time (hint: think type casting)
	
	while(curr->_parent!=NULL)
	{
		ancestorCount++;
		curr = curr->_parent;
	}		
	
	return ancestorCount;
}


