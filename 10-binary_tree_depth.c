#include "binary_trees.h"
/**
 * binary_tree_depth_recursive - recursively finds depth of tree
 *
 * @current: current node to check depth
 * Return: On Success: depth of tree
 * On Failure: 0
 **/
size_t binary_tree_depth_recursive(const binary_tree_t *current)
{
	if (current == NULL || current->parent == NULL)
		return (0);
	return (1 + binary_tree_depth_recursive(current->parent));
}
/**
 * binary_tree_depth - finds depth of tree
 *
 * @tree: tree to find depth of
 * Return: On Success: Depth of tree
 * On Failure: 0
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_depth_recursive(tree));
}
