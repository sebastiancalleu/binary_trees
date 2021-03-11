#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int bop, full, perfect = 0;

	bop = binary_tree_balance(tree);
	full = binary_tree_is_full(tree);

	if (bop == 0 && full == 1)
		perfect = 1;

	return (perfect);
}