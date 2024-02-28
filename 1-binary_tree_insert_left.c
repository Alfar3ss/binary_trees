#include "binary_trees.h"

/**
 * binary_tree_insert_left : function that inserts a node as the left-child of another node
 * @parent: pnt to the node insrt left-child in
 * @value: Value to store in the new node
 *
 * Return: ptr to make node 
 * 	 NULL if it fails 	
 * 		 if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *n3w_n0d3;
    if (parent == NULL)
        return (NULL);
    n3w_n0d3 = binary_tree_node(parent, value);
    if (n3w_n0d3 == NULL)
        return (NULL);
    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = n3w_n0d3;
    }
    parent->left = n3w_n0d3;
    return (n3w_n0d3);
}
