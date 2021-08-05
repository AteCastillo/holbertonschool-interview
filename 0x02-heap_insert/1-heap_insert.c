#include "binary_trees.h"


/**
 * binary_tree_node - create a new 
 * @parent: pointer to pointer
 * @value: value for the n in node
 * Return: Always 0.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

    if (newnode == NULL)
        return (NULL);

    (newnode)->parent = parent;
    (newnode)->n = value;
    (newnode)->left = NULL;
    (newnode)->right = NULL;

    return (newnode);   

}