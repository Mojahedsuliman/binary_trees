#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: if tree is NULL the function will return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full, right_full = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);

	if (left_full == 1)
	{
		return (1);
	}

	if (right_full == 1)
	{
		return (1);
	}

	return (0);
}
