#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter;

	if (tree->parent == NULL)
		return (0);
	for (counter = 0; tree->parent != NULL; counter++)
		tree = tree->parent;

	return (counter);
}