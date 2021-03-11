#include "binary_trees.h"

/**
 * binary_tree_nodes_help - This function is auxiliar for the count
 * @tree: is the pointer to the root node
 * @counter: is the pointer to the counter the nodes
 */
int binary_tree_balance_help(const binary_tree_t *tree)
{
	int leftsize, rightsize;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (1);
	leftsize = binary_tree_balance_help(tree->left);
	rightsize = binary_tree_balance_help(tree->right);
	if (leftsize > rightsize)
		return (leftsize + 1);
	return (rightsize + 1);
}
/**
 * binary_tree_nodes - function that counts the nodes with at less 1 node
 * @tree: pointer to the root node of the tree to count
 * Return: the leaves
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lcounter = 0, rcounter = 0, bop;

	if (tree->left)
		lcounter = binary_tree_balance_help(tree->left);
	if (tree->right)
		rcounter = binary_tree_balance_help(tree->right);
	bop = lcounter - rcounter;
	return (bop);
}