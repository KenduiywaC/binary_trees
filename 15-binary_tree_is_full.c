#include "binary_trees.h"

/**
* binary_tree_is_full - Checks if a binary tree is full.
* A binary tree is considered full if every node has either zero or two children.
*
* @tree: Pointer to the root node of the tree to check
* Return: 1 if the tree is full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
else
{
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
else if (tree->left == NULL || tree->right == NULL)
{
return (0);
}     
else
{
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
}
}
