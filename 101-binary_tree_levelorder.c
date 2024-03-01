#include "binary_tress.h"

/**
 * binary_tree_levelorder - a function that goes through a binary tree
 * using level-order traversa
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_levelorder(tree->left, func);
		func(tree->n);
		binary_tree_levelorder(tree->right, func);
	}
}
