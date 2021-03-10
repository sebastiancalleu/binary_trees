#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodeleft;

	nodeleft = malloc(sizeof(binary_tree_t));
	if (nodeleft == NULL)
		return (NULL);
	nodeleft->n = value;
	nodeleft->parent = parent;
	nodeleft->right = NULL;
	nodeleft->left = NULL;
	if (parent->left != NULL)
		parent->left->parent = nodeleft;
		nodeleft->left = parent->left;
	parent->left = nodeleft;

	return (nodeleft);
}