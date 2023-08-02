#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right = binary_tree_height(tree->right);
	size_t height_left = binary_tree_height(tree->left);

	if (tree == NULL)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);

	height_left++;
	height_right++;

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
