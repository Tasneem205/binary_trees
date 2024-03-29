#include "binary_trees.h"

/**
 * binary_tree_preorder - function to traverse a node preoderly
 * @tree: the tree
 * @func: function pointer to print the tree
 * Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_preorder(tree->left, func);
		func(tree->n);
		binary_tree_preorder(tree->right, func);
	}
}
