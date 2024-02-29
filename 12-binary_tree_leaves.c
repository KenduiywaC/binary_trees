#include "binary_trees.h"

/**
* binary_tree_leaves - Counts the number of leaf nodes in a binary tree.
* @tree: Pointer to the root node of the tree to count the leaves
* Return: Number of leaf nodes in the tree, 0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves = 0;
if (tree == NULL)
{
return (0);
}
else
{
leaves += binary_tree_leaves(tree->left);
leaves += binary_tree_leaves(tree->right);
if (tree->left == NULL && tree->right == NULL)
{
leaves += 1;
}
}
return (leaves);
}
