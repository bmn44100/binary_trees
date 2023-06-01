#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree
 * @parent: pointer to the parent parent_node of the parent_node
 * @value: the value to put in the new parent_node
 * Return: a pointer to the new parent_node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *parent_node = NULL;

	parent_node = malloc(sizeof(binary_tree_t));
	if (parent_node == NULL)
		return (NULL);
	parent_node->n = value;
	parent_node->left = NULL;
	parent_node->right = NULL;

	if (parent == NULL)
		parent_node->parent = NULL;
	else
		parent_node->parent = parent;

	return (parent_node);
}
