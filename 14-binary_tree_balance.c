#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance factor of binary tree
 * @tree: Pointer to root node tree to measure balance factor
 *
 * Return: If NULL, return 0, else return balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures height of binary tree
 * @tree: Pointer to root node of the tree to measure height
 *
 * Return: If tree is NULL, return 0, else return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
