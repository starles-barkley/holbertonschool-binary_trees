#include "binary_trees.h"
/**
 *
 *
 *
 **/
size_t binary_tree_size_recursive(const binary_tree_t *current)
{
	size_t leftSize = 0;
	size_t rightSize = 0;
	
	if (current == NULL)
		return (0);
	leftSize = binary_tree_size_recursive(current->left);
	rightSize = binary_tree_size_recursive(current->right);
	return (1 + leftSize + rightSize);
}

/**
 *
 *
 *
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree));
}
