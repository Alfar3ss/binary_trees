#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: ptr to the parent node of the node to create
 * @value: value  that put in the new node
 * Return: if an error show up NULL. something else ptr to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *n3w_n0d3;
    
    n3w_n0d3 = malloc(sizeof(binary_tree_t));
    
    if (n3w_n0d3 == NULL)
        return (NULL);
    
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;
    
    return (n3w_n0d3);
}
