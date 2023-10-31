#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - Creates a binary tree node
 * @parent: parent node
 * @value: node value
 * Return: the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (!new_node)
		return (NULL);
	return (new_node);
}