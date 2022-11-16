#include "BinaryTree.hpp"

#include <iostream>

using namespace std;

TreeNode* findHelper(const string &, const TreeNode *);
TreeNode* insertHelper(TreeNode *intoSubTree, const TreeNode *newNode);

TreeNode* 
BinaryTree::find(const string &findMe) const
{
	return findHelper(findMe, _root);
}

TreeNode* findHelper(const string &val, const TreeNode *nodePtr)
{
	if (!nodePtr) // no nodes left to search !
		return NULL;
		
	if (nodePtr->value() == val)
		return (TreeNode *) nodePtr;  
		
	if ( val > nodePtr->value()  )
		return findHelper(val, nodePtr->right() );
	else // if val < ...
		return findHelper(val, nodePtr->left() );	
}

void 
BinaryTree::insert(const std::string &valueToAdd)
{
	// already in tree?
	if (find( valueToAdd ) /*!= NULL*/ )
	{
		return;		
	}		
	
	TreeNode *newTreeNode = new TreeNode(valueToAdd);
	_root = insertHelper(_root, newTreeNode);
}

TreeNode* insertHelper(TreeNode *intoSubTree, const TreeNode *newNode)
{
	// no node to insert? tree will be the same as it is now
	if (!newNode) //if (newNode == NULL)
	{
		return (TreeNode *) intoSubTree;
	}
	
	// empty subtree? the new tree will have only the node we are inserting
	if (!intoSubTree) //if (intoSubTree == NULL)
	{
		return (TreeNode *) newNode;
	}

	// note: this helper function assumes the node is not already present!

	// should we be inserting into left side?
	if 	( newNode->value() < intoSubTree->value() )
	{
		// insert into left subtree, and update our left subtree pointer accordingly
		intoSubTree->left() = insertHelper( intoSubTree -> left() , newNode );

		// update left subtree's "parent" pointer
		intoSubTree->left()->parent() = intoSubTree;
	}
	else // >, so must need to insert into right side
	{
		// insert into right subtree, and update our right subtree pointer accordingly
		intoSubTree->right() = insertHelper( intoSubTree -> right() , newNode );
				
		// update right subtree's "parent" pointer
		intoSubTree->right()->parent() = intoSubTree;
	}
	
	return intoSubTree;
}
