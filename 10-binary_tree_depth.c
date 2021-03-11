#include "binary_trees.h"

/**
 * binary_tree_depth - This function measure the depth of the tree
 * @tree: pointer to the root node
 * Return: the measure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	for (counter = 0; tree->parent != NULL; counter++)
		tree = tree->parent;

	return (counter);
}
