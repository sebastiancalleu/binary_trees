#include "binary_trees.h"

/**
 * binary_tree_size_help - This function is auxiliar for the measure
 * @tree: is the pointer to the root node
 * @counter: is the pointer to the counter the nodes
 */

void binary_tree_size_help(const binary_tree_t *tree, size_t *counter)
{
	if (tree != NULL)
	{
		if (tree->left != NULL)
			binary_tree_size_help(tree->left, counter);
		if (tree->right != NULL)
			binary_tree_size_help(tree->right, counter);
		*counter = *counter + 1;
	}
}

/**
 * binary_tree_size - function that measure the size of the each node.
 * @tree: pointer to the root node
 * Return: the size of the each node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter = 0;

	binary_tree_size_help(tree, &counter);
	return (counter);
}
