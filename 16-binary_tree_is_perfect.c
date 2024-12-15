#include "binary_trees.h"
/**
 * tree_is_perfect - Function that says if a tree is perfect or not.
 * @tree: Tree to be checked
 * Return: 1 if tree is perfect,
 *	0 if not.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int left_depth = 0, right_depth = 0;

	if (tree->left && tree->right)
	{
		left_depth = tree_is_perfect(tree->left) + 1;
		right_depth = tree_is_perfect(tree->right) + 1;
		if (right_depth == left_depth && right_depth != 0 && left_depth != 0)
			return (right_depth);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - Checks binary tree if it is perfect
 * @tree: Binary tree to check
 * Return: 1 if tree is perfect,
 *	0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = tree_is_perfect(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
