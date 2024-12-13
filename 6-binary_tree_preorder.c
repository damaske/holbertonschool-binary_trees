#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary
 * @tree: pointer to root
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    const binary_tree_t *temp;
    
    temp = tree;
    
	if (tree == NULL)
	    return;

    if (func == NULL)
        return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}