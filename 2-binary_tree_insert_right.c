#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right 
 * @parent: A ptr to the node 
 * @value: The value to store in  n3w_n0d3
 *
 * Return: parent is NULL or an issue : NULL.
 *         else @parent to the n3w_n0d3.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n3w_n0d3;

	if (parent == NULL)
		return (NULL);

	n3w_n0d3 = binary_tree_node(parent, value);
	if (n3w_n0d3 == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = n3w_n0d3;
	}
	parent->right = n3w_n0d3;

	return (n3w_n0d3);
}
