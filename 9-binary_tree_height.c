#include "binary_trees.h"

/**
 * binary_tree_height -  a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: if tree is NULL the function will return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_hight, right_hight = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_hight = binary_tree_hight(tree->left);
	right_hight = binary_tree_hight(tree->right);

	if (left_hight > right_hight)
	{
		return (left_hight + 1);
	}

	return (right_hight + 1)
}
