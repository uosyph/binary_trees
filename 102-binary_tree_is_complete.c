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
	if (tree == NULL)
		return (0);

	if (tree->right || tree->left)
		return ((binary_tree_nodes(tree->right) + 1) +
				(binary_tree_nodes(tree->left) + 1) - 1);

	return (0);
}

/**
 * is_complete - Checks if a binary tree is complete
 * using index & number of nodes
 *
 * @tree: Pointer to the root node of the tree to check
 * @index: Index of the node
 * @nodes: Number of the nodes
 *
 * Return: 1 if tree is complete, 0 otherwise
 */
int is_complete(const binary_tree_t *tree, int index, int nodes)
{
	if (tree == NULL)
		return (1);

	if (index >= nodes)
		return (0);

	return (is_complete(tree->left, 2 * index + 1, nodes) &&
			is_complete(tree->right, 2 * index + 2, nodes));
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int index = 0;
	size_t nodes = binary_tree_nodes(tree);

	if (tree == NULL)
		return (0);

	return (is_complete(tree, index, (int)nodes));
}
