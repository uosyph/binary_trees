#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree
 *
 * @tree: Double pointer to the root node of the BST to insert the value
 * @value: Value to store in the node to be inserted
 *
 * Return: Pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp;

	temp = *tree;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}

	while (temp)
	{
		if (temp->n == value)
			return (NULL);

		if (temp->n > value)
		{
			if (temp->left == NULL)
			{
				temp->left = (bst_t *)binary_tree_node(temp, value);
				return (temp->left);
			}
			temp = temp->left;
		}
		if (temp->n < value)
		{
			if (temp->right == NULL)
			{
				temp->right = (bst_t *)binary_tree_node(temp, value);
				return (temp->right);
			}
			temp = temp->right;
		}
	}

	return (NULL);
}
