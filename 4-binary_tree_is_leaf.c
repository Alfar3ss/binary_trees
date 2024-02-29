#include "binary_trees.h"

/**
 * binary_tree_is_leaf - verify if a node is a leaf of a binary tree.
 * @node: A ptr to  node to check.
 * Return: if true 0 else 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL || node->left == NULL || node->right == NULL)
		return (1);

	return (0);
}
