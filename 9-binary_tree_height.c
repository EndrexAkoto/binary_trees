#include "binary_trees.h"

/**
 * binary_tree_height - Measure height of binary tree
 * @tree: Pointer to root node tree to measure height
 *
 * Return: If tree is NULL, function returns 0, else return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
