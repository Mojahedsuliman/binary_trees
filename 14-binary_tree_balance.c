#include "binary_tress.h"

/**
 * binary_tree_balance - a function that measures the balance
 * factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: if tree is NULL the function will return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance = 0;
	int right_balance = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_balance = binary_tree_balance(tree->left);
	right_balance = binary_tree_balance(tree_right);

	return (left_balance - right_balance);
}
