#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - determines the number of nodes of a binary tree
 * @tree: the tree being measured
 *
 * Return: the number of nodes of the tree. Defaults to 0 if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (0);
}
