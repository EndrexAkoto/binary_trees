#include "binary_trees.h"

/**
 * binary_tree_size - Measures size of binary tree
 * @tree: Pointer to root node of tree to measure the size 
 *
 * Return: Size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
