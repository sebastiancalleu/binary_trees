#include "binary_trees.h"

/**
 * binary_tree_insert_right - this function insert a node
 * as the right-child of another node
 * @parent: is a pointer to the node to insert the rigth-child
 * @value: is the value to store in the new node
 * Return: a pointer to the created node or Null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *noderight;

	if (parent == NULL)
		return (NULL);

	noderight = malloc(sizeof(binary_tree_t));
	if (noderight == NULL)
		return (NULL);
	noderight->n = value;
	noderight->parent = parent;
	noderight->right = NULL;
	noderight->left = NULL;
	if (parent->right != NULL)
		parent->right->parent = noderight;
	noderight->right = parent->right;
	parent->right = noderight;

	return (noderight);
}
