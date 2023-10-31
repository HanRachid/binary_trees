#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node in left
 * @parent: parent node
 * @value: node value
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (!new_node)
		return (NULL);
	parent->left = new_node;
	return (new_node);
}
