#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete : removes binary trees.
 * @tree: A ptr to the root node of the tree to remove.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
