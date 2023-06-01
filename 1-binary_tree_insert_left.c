#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent: pointer to the parent node of the node
 * @value: the value to put in the node node
 * Return: a pointer to the node node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_left = NULL;

	if (parent == NULL)
		return (NULL);
	node_left = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		node_left->left = parent->left;
		parent->left = node_left;
		node_left->left->parent = node_left;
	}
	else
		parent->left = node_left;
	return (node_left);
}
