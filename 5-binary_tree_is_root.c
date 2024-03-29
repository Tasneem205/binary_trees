#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is root
 * @node: the node
 * Return: 0 if not 1 if true
 **/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
