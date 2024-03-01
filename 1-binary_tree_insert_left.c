#include "binary_trees.h"

/**
 * binary_tree_insert_left -  a function that inserts a node as the
 * left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return:  a pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	nod_pointer->n = value;
	nod_pointer->parent = parent;
	nod_pointer->left = NULL;
	nod_pointer->right = NULL;

	if (parent->left != NULL)
	{
		nod_pointer->left = parent->left;
		parent->left->parent = nod_pointer;
	}
	parent->left = nod_pointer;

	return (nod_pointer);
}
