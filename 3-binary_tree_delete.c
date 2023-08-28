#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes  binary tree
 * @tree: Pointer to root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
