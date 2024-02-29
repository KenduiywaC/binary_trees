#include "binary_trees.h"

/**
* binary_tree_delete - Deletes an entire binary tree using recursion to free the memory allocated for each node in the tree.
* @tree: Pointer to the root node of the tree to be deleted
* Return: Nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree != NULL)
{
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
}
free(tree);
}
