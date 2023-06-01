#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the tree to measure the depth
 * Return: tree depth, 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int index = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		index++;
		tree = tree->parent;
	}
	return (index);
}
