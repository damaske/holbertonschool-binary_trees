#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;
	int temp;

	new_left = malloc(sizeof(binary_tree_t));
	if (new_left == NULL)
		return (NULL);

	 new_left->n = value;
	new_left->right = NULL;
       	new_left->left = parent->;
	new_left->parent = parent;

	if (parent->left == NULL)
		parent->left = new_left;
	return (new_left);
}
