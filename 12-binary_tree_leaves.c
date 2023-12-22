#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - determines the number of leaves of a binary tree
 * @tree: the tree being measured
 *
 * Return: the number of leaves of the tree. Defaults to 0 if tree is NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
