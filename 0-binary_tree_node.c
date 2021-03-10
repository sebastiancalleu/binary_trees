#include "binary_trees.h"

/**
 * binary_tree_node - this function creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodeptr;

	nodeptr = malloc(sizeof(binary_tree_t));
	if (nodeptr == NULL)
		return (NULL);
	nodeptr->n = value;
	nodeptr->parent = parent;
	nodeptr->left = NULL;
	nodeptr->right = NULL;

	return (nodeptr);
}
