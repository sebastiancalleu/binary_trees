#include "binary_trees.h"

/**
 * binary_tree_balance_help - This function is auxiliar
 * for the lcounter and the rcounter
 * @tree: is the pointer to the root node
 * Return: size of the branch right
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
 * binary_tree_balance - function that counts the nodes with at less 1 node
 * @tree: pointer to the root node of the tree to count
 * Return: the power balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lcounter = 0, rcounter = 0, bop;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lcounter = binary_tree_balance_help(tree->left);
	if (tree->right)
		rcounter = binary_tree_balance_help(tree->right);
	bop = lcounter - rcounter;
	return (bop);
}

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
 * binary_tree_is_full - function that counts the nodes with at less 1 node
 * @tree: pointer to the root node of the tree to count
 * Return: the leaves
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int counter = 1;

	if (tree == NULL)
		return (0);

	binary_tree_is_full_help(tree, &counter);
	return (counter);
}

/**
 * binary_tree_is_perfect - This functiont return 1 if
 * the binary tree is perfect or 0 else
 * @tree: pointer to the root node of the tree
 * Return: if is perfect or not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int bop, full, perfect = 0;

	if (!tree)
		return (0);

	bop = binary_tree_balance(tree);
	full = binary_tree_is_full(tree);

	if (bop == 0 && full == 1)
		perfect = 1;

	return (perfect);
}
