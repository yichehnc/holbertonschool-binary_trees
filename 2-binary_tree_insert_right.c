#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds a node to the right
 * @parent: the parent node
 * @value: the value to insert in
 *
 * Return: the node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		exit(98);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;

	if (parent->right != NULL) /* occupied */
	{
		new_node->parent = parent;
		new_node->right = parent->right;
		new_node->left = NULL;

		parent->right->parent = new_node;
	}
	else/* unoccupied */
	{
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
	}

	parent->right = new_node;
	return (new_node);
}
