#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: if tree is NULL the function will return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_perfect, right_perfect = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);

	if (left_perfect == 1)
	{
		return (1);
	}

	if  (right_perfect == 1)
	{
		return (1);
	}

	return (0);
}
