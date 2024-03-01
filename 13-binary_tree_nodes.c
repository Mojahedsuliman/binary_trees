#include "binary_trees.h"

/**
 * binary_tree_nodes -  a function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: if tree is NULL the function will return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	return (left_nodes + right_nodes + 1);
}
