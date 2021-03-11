#include "binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if(node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent && node->parent->parent->left)
	{
		if(node->parent->n == node->parent->parent->left->n)
		{
			if(node->parent->parent->right)
				return (node->parent->parent->right);
			else
				return (NULL);
		}
	}
	else
		return (NULL);
	if (node->parent->parent && node->parent->parent->right)
	{
		if(node->parent->n == node->parent->parent->right->n)
		{
			if (node->parent->parent->left)
				return (node->parent->parent->left);
			else
				return (NULL);
		}
	}
	return (NULL);
}