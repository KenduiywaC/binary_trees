#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the number of nodes in a binary tree that have children.
* @tree: Pointer to the root node of the tree to count the nodes
* Return: Number of nodes with children in the tree, 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes = 0;
if (tree == NULL)
{
return (0);
}
else
{
if (tree->left || tree->right)
{
nodes += 1;
}
nodes += binary_tree_nodes(tree->left);
nodes += binary_tree_nodes(tree->right);
}
return (nodes);
}
