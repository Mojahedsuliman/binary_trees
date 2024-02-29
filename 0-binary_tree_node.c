#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nod_pointer;

	if (parent == NULL)
	{
		return (NULL);
	}

	nod_pointer = malloc(sizeof(binary_tree_t));

	if (nod_pointer == NULL)
	{
		return (NULL);
	}

	nod_pointer->parent = parent;
	nod_pointer->n = value;
	nod_pointer->right = NULL;
	nod_pointer->left = NULL;

	return (nod_pointer);
}
