<a name="readme-top"></a>

<p align="center">
    <img src="https://thenounproject.com/api/private/icons/5499988/edit/?backgroundShape=SQUARE&backgroundShapeColor=%23000000&backgroundShapeOpacity=0&exportSize=752&flipX=false&flipY=false&foregroundColor=%23FFFFFF&foregroundOpacity=1&imageFormat=png&rotation=0" width="160">
</p>

# Binary Trees

A binary tree is a data structure composed of nodes, where each node contains a value and references to its left and right child nodes. The left child node contains a value less than the parent node's value, while the right child node contains a value greater than or equal to the parent node's value.

## Table of Contents

-   [Implemented Functions](#implemented-functions)
-   [Usage](#usage)
-   [Testing](#testing)

## Implemented Functions

The following functions are implemented in this repository:

-   `binary_tree_node` - Creates a new binary tree node with a given value and parent node.
-   `binary_tree_insert_left` - Inserts a new node as the left child of a given node.
-   `binary_tree_insert_right` - Inserts a new node as the right child of a given node.
-   `binary_tree_delete` - Deletes an entire binary tree.
-   `binary_tree_is_leaf` - Checks if a given node is a leaf node.
-   `binary_tree_is_root` - Checks if a given node is a root node.
-   `binary_tree_preorder` - Traverses a binary tree using pre-order traversal.
-   `binary_tree_inorder` - Traverses a binary tree using in-order traversal.
-   `binary_tree_postorder` - Traverses a binary tree using post-order traversal.
-   `binary_tree_height` - Computes the height of a binary tree.
-   `binary_tree_depth` - Computes the depth of a given node in a binary tree.
-   `binary_tree_size` - Computes the size (number of nodes) of a binary tree.
-   `binary_tree_leaves` - Computes the number of leaves in a binary tree.
-   `binary_tree_nodes` - Computes the number of nodes with at least one child in a binary tree.
-   `binary_tree_balance` - Computes the balance factor of a binary tree.
-   `binary_tree_is_full` - Checks if a binary tree is full (all nodes have 0 or 2 children).
-   `binary_tree_is_perfect` - Checks if a binary tree is perfect (all levels are fully filled).
-   `binary_tree_sibling` - Finds the sibling of a given node in a binary tree.
-   `binary_tree_uncle` - Finds the uncle of a given node in a binary tree.
-   `binary_trees_ancestor` - Finds the lowest common ancestor of two nodes.
-   `binary_tree_levelorder` - Goes through a binary tree using level-order traversal.
-   `binary_tree_is_complete` - Checks if a binary tree is complete.
-   `binary_tree_rotate_left` - Performs a left-rotation on a binary tree.
-   `binary_tree_rotate_right` - Performs a right-rotation on a binary tree.
-   `binary_tree_is_bst` - Checks if a binary tree is a valid Binary Search Tree.
-   `bst_insert` - Inserts a value in a Binary Search Tree.
-   `array_to_bst` - Builds a Binary Search Tree from an array.
-   `bst_search` - Searches for a value in a Binary Search Tree.

## Usage

To use the functions in your own project, simply include the relevant header file and link against the compiled object files.

Example:

```c
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root = binary_tree_node(NULL, 98);

    binary_tree_insert_left(root, 12);
    binary_tree_insert_right(root, 402);
    binary_tree_insert_left(root->left, 6);
    binary_tree_insert_right(root->left, 56);

    binary_tree_preorder(root);

    binary_tree_delete(root);

    return 0;
}
```

## Testing

This repository includes a set of test files to verify the correctness of the implemented functions. To run a test, execute the following commands:

Compiling:

```sh
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/0-main.c 0-binary_tree_node.c -o 0-node
```

Run the test:

```sh
./0-node
```

<p align="right"><a href="#readme-top">Back to Top</a></p>
