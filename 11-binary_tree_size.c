#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - determines the size of a binary tree
 * @tree: the tree being measured
 *
 * Return: the size of the tree. Defaults to 0 if tree is NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l = 0, size_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		size_l = binary_tree_size(tree->left);
	if (tree->right != NULL)
		size_r = binary_tree_size(tree->right);

	return (size_l + size_r + 1);
}