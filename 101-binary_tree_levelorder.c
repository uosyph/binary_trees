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
	size_t height_left;
	size_t height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_left++;
	height_right = binary_tree_height(tree->right);
	height_right++;

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	int right = 0, left = 0;
	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);

	queue[left++] = (binary_tree_t *)tree;

	while (right < left)
	{
		binary_tree_t *node = queue[right++];

		func(node->n);

		if (node->left != NULL)
			queue[left++] = node->left;
		if (node->right != NULL)
			queue[left++] = node->right;
	}

	free(queue);
}