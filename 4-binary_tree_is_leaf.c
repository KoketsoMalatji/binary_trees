#include "binary_trees.h"

/**
  * binary_tree_is_leaf - Check if a node is a leaf
  * @node: node of the BT
  * Return: new node or NULL on failure
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!(node->left) && !(node->right))
		return (1);

	return (0);
}
