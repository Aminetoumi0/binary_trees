#include "binary_trees.h"
/**
 * binary_tree_is_leaf - know if node is leaf, that means that node
 * does not have any child neither left nor right
 * @node: node to study
 * Return: 1 if a leaf or 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
