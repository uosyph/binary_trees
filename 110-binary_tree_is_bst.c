#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst - Checks if a binary tree is a valid Binary Search Tree
 *
 * @tree: Pointer to the root node of the tree to check
 * @min: Minimum value that a node can have and still be considered valid
 * @max: Maximum value that a node can have and still be considered valid
 *
 * Return: 1 if tree is a valid BST, or 0 otherwise
 */
int is_bst(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return ((is_bst(tree->left, min, tree->n - 1)) &&
			(is_bst(tree->right, tree->n + 1, max)));
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, or 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst(tree, INT_MIN, INT_MAX));
}
