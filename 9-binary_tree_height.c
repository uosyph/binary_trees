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
	if (tree == NULL || (!(tree->left) && !(tree->right)))
		return (0);

	size_t height_right = binary_tree_height(tree->right);
	height_right++;
	size_t height_left = binary_tree_height(tree->left);
	height_left++;

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
