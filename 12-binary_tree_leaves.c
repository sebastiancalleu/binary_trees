#include "binary_trees.h"

/**
 * binary_tree_postorder - function that print postorder.
 * @func: print function.
 * @tree: the tree.
 */
void binary_tree_leaves_help(const binary_tree_t *tree, size_t *counter)
{
	if (tree != NULL)
	{
		if (tree->left != NULL)
			binary_tree_leaves_help(tree->left, counter);
		if (tree->right != NULL)
			binary_tree_leaves_help(tree->right, counter);
		if (tree->left == NULL && tree->right == NULL)
			*counter = *counter + 1;
	}
}
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter = 0;
	binary_tree_leaves_help(tree, &counter);
	return (counter);
}