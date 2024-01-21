#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root node from which to measure, starting at 0
 *
 * Return: levels from root, or 0 if `tree` is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 1, right = 1, final = 1;

	if ((tree == NULL) || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		left = left + binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		right = right + binary_tree_height(tree->right);
	}

	final = (left > right) ? left : right;

	return (final);
}
