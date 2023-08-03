#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array
 *
 * @array: Pointer to the first element of the array to be converted
 * @size: Number of element in the array
 *
 * Return: Pointer to the root node of the created BST, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t count = 0;
	bst_t *root_node = NULL;

	while (size > count)
	{
		bst_insert(&root_node, array[count]);
		count++;
	}
	return (root_node);
}
