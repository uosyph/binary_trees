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

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 *
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes,
 * or NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *first_node = (binary_tree_t *)first;
	binary_tree_t *second_node = (binary_tree_t *)second;
	size_t first_node_depth = binary_tree_depth(first_node);
	size_t second_node_depth = binary_tree_depth(second_node);

	if (first_node == NULL || second_node == NULL)
		return (NULL);

	if (first_node_depth > second_node_depth)
		while (first_node_depth > second_node_depth)
		{
			first_node = first_node->parent;
			first_node_depth--;
		}

	if (first_node_depth < second_node_depth)
		while (first_node_depth < second_node_depth)
		{
			second_node = second_node->parent;
			second_node_depth--;
		}

	while (first_node != second_node)
	{
		first_node = first_node->parent;
		second_node = second_node->parent;
	}

	return (first_node);
}
