#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of node in binary tree
 * @tree: Pointer node to measure depth
 *
 * Return: If NULL,  return 0, else return depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
