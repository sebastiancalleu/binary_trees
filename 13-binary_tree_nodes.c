#include "binary_trees.h"

/**
 * binary_tree_nodes_help - This function is auxiliar for the count
 * @tree: is the pointer to the root node
 * @counter: is the pointer to the counter the nodes
 */
void binary_tree_nodes_help(const binary_tree_t *tree, size_t *counter)
{
	if (tree != NULL)
	{
		if (tree->left != NULL)
			binary_tree_nodes_help(tree->left, counter);
		if (tree->right != NULL)
			binary_tree_nodes_help(tree->right, counter);
		if (tree->left != NULL || tree->right != NULL)
			*counter = *counter + 1;
	}
}
/**
 * binary_tree_nodes - function that counts the nodes with at less 1 node
 * @tree: pointer to the root node of the tree to count
 * Return: the leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	binary_tree_nodes_help(tree, &counter);
	return (counter);
}
