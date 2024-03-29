#include "binary_trees.h"

/**
 * binary_tree_is_leaf - finds if the node is leaf
 * @node: checks this node
 * Return: true or false
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
