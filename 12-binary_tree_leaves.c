#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: if tree is NULL the function will return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (left_leaves + right_leaves);
}
