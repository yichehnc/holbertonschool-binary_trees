#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - recursively proceeds through a `binary_tree_t`
 * binary tree using in-order traversal
 * @tree: root node of tree to traverse
 * @func: function pointer to call for each node; value in the node is
 * passed as a parameter to `func`
 *
 * Return: the node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left != NULL)
		{
			binary_tree_inorder(tree->left, func);
		}

		func(tree->n);
	}
		if (tree->right != NULL)
		{
			binary_tree_inorder(tree->right, func);
		}
	}

}
