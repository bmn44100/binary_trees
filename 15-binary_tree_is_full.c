#include "binary_trees.h"

/**
 * binary_tree_is_full - binary_tree_is_full
 * @tree: a pointer to the root node of the tree
 * Return: 1 if tree is full, or 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));
	return (0);
}
