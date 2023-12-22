#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: the node whose sibling the function finds
 *
 * Return: a pointer to the sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (0);
	if (node->parent->left == NULL || node->parent->right == NULL)
		return (0);
	if (node->parent->left->n == node->n)
		return (node->parent->right);
	return (node->parent->left);
}
