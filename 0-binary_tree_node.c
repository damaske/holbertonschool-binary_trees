#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;
    newNode = (binary_tree_t*)malloc(sizeof(binary_tree_t));

    if (newNode == NULL)
    {
        printf("Memory error.\n");
        return NULL;
    }

    newNode->n = value;
    newNode->parent = parent;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}