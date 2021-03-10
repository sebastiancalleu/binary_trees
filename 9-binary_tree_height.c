#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftsize, rightsize;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	leftsize = binary_tree_height(tree->left);
	rightsize = binary_tree_height(tree->right);
	if (leftsize > rightsize)
		return (leftsize + 1);
	return (rightsize + 1);
}
