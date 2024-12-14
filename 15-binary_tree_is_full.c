#include "binary_trees.h"
#include <stdbool.h>

int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    if (tree->left == NULL && tree->right == NULL)
    return true;

    if (tree->left != NULL && tree->right != NULL)
    return true;

    return false;

}