#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - recursively proceeds through a `binary_tree_t`
 * binary tree using pre-order traversal
 * @tree: root node of tree to traverse
 * @func:  pointer to function to call for each node; value in the node is
 * passed as a parameter to `func`
 *
 * Return: the node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);

		if (tree->left != NULL)
		{
			binary_tree_preorder(tree->left, func);
		}

		if (tree->right != NULL)
		{
			binary_tree_preorder(tree->right, func);
		}
	}
}
