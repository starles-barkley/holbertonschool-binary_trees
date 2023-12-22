#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - determines whether a tree is full or not
 * @tree: the tree being measured
 *
 * Return: 1 if the tree is full, 0 otherwise
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_count = 0, r_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	l_count = binary_tree_is_full(tree->left);
	r_count = binary_tree_is_full(tree->right);
	if ((l_count == 0 && r_count == 1) || (l_count == 1 && r_count == 0))
		return (0);
	return (1);
}
