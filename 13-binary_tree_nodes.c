#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree->right || tree->left)
		return ((binary_tree_nodes(tree->right) + 1) +
				(binary_tree_nodes(tree->left) + 1) - 1);
	return (0);
}
