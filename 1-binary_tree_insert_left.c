#include "binary_trees.h"
/**
 * binary_tree_insert_left - this function insert a node
 * as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child
 * @value: is the value to store in the new node
 * Return: a pointer to the created node or Null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodeleft;

	nodeleft = malloc(sizeof(binary_tree_t));
	if (nodeleft == NULL | parent == NULL)
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
