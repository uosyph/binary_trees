#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree
 *
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node of the tree once rotated,
 * or NULL on failure
 **/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);

	tree->parent = tree->left;
	tree->left = tree->parent->right;

	if (tree->left != NULL)
		tree->left->parent = tree;

	tree->parent->right = tree;
	tree->parent->parent = NULL;

	return (tree->parent);
}
