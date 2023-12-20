#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses the list using preorder traversal
 *
 * @tree: binary tree to search through
 * @func: function pointer
 **/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
