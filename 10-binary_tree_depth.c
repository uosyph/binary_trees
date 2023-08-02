#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 *
 * @node: Pointer to the node to measure the depth
 *
 * Return: Depth of tree, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	if (node == NULL || node->parent == NULL)
		return (0);

	depth = binary_tree_depth(node->parent);
	depth++;
	return (depth);
}
