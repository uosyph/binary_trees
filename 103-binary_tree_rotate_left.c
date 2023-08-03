#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree
 *
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node of the tree once rotated,
 * or NULL on failure
 **/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);

	tree->parent = tree->right;
	tree->right = tree->parent->left;
	tree->parent->left = tree;

	if (tree->right != NULL)
		tree->right->parent = tree;

	tree->parent->parent = NULL;

	return (tree->parent);
}
