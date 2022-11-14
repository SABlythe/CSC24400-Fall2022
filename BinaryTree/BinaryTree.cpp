#include "BinaryTree.hpp"

#include <iostream>

using namespace std;

TreeNode* 
BinaryTree::find(const string &findMe) const
{
	// we will fix the error that happens from this call in class next time. 
	return findHelper(findMe, _root);
}

TreeNode* findHelper(const string &val, const TreeNode *nodePtr)
{
	if (!nodePtr) // no nodes left to search !
		return NULL;
		
	if (nodePtr->value() == val)
		return nodePtr;  // we'll talk about the error this causes next time (type-cast!)
		
	if ( val > nodePtr->value()  )
		return findHelper(val, nodePtr->right() );
	else // if val < ...
		return findHelper(val, nodePtr->left() );	
}

