#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 *
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node,
 * or NULL if node has no sibling, or node/parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL ||
		node->parent == NULL ||
		node->parent->right == NULL ||
		node->parent->left == NULL)
		return (NULL);

	if (node->parent->right != NULL && node->parent->right != node)
		return (node->parent->right);
	if (node->parent->left != NULL && node->parent->left != node)
		return (node->parent->left);

	return (NULL);
}
