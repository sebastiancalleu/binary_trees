#include "binary_trees.h"

/**
 * binary_tree_is_full_help - This function is auxiliar for the count
 * @tree: is the pointer to the root node
 * @counter: is the pointer to the counter the nodes
 */
void binary_tree_is_full_help(const binary_tree_t *tree, int *counter)
{
	if (tree != NULL)
	{
		if (tree->left != NULL)
			binary_tree_is_full_help(tree->left, counter);
		if (tree->right != NULL)
			binary_tree_is_full_help(tree->right, counter);
		if (tree->left == NULL && tree->right != NULL)
			*counter = 0;
		if (tree->left != NULL && tree->right == NULL)
			*counter = 0;
	}
}
/**
 * binary_tree_nodes - function that counts the nodes with at less 1 node
 * @tree: pointer to the root node of the tree to count
 * Return: the leaves
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int counter = 1;

	binary_tree_is_full_help(tree, &counter);
	return (counter);
}