#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if(node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left)
	{
		if(node->n == node->parent->left->n)
		{
			if(node->parent->right)
				return (node->parent->right);
			else
				return (NULL);
		}
	}
	else
		return (NULL);
	if (node->parent->right)
	{
		if(node->n == node->parent->right->n)
		{
			if (node->parent->left)
				return (node->parent->left);
			else
				return (NULL);
		}
	}
	return (NULL);
}