#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * @parent: pointer to the parent node of the node
 * @value: the value to put in the node node
 * Return: a pointer to the node node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_right = NULL;

	if (parent == NULL)
		return (NULL);
	node_right = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		node_right->right = parent->right;
		parent->right = node_right;
		node_right->right->parent = node_right;
	}
	else
		parent->right = node_right;
	return (node_right);
}
