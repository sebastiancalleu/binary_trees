#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodeptr;

	nodeptr = malloc(sizeof(binary_tree_t));
	if (nodeptr == NULL)
		return NULL;
	nodeptr->n = value;
	nodeptr->parent = parent;
	nodeptr->left = NULL;
	nodeptr->right = NULL;

	return (nodeptr);
}