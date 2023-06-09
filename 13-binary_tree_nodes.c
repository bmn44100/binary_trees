#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes, or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	else
		return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + 1);
}
