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
	if (temp == NULL || func == NULL)
	    return;

	func(temp->n);
	binary_tree_preorder(temp->left, func);
	binary_tree_preorder(temp->right, func);

}