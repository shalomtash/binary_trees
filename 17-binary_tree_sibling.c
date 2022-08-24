#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that checks if a binary tree is perfect.
 *
 * @node: Pointer to a node of a binary tree.
 *
 * Return: Pointer to sibling or NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}	
