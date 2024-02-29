#include "binary_trees.h"

/**
* binary_tree_height_b - Measures the height of a binary tree.
* @tree: Pointer to the root node of the tree to measure
* Return: Height of the tree, 0 if tree is NULL
*/
size_t binary_tree_height_b(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;
if (tree == NULL)
{
return (0);
}
else
{
if (tree->left != NULL)
{
left_height = 1 + binary_tree_height_b(tree->left);
}
if (tree->right != NULL)
{
right_height = 1 + binary_tree_height_b(tree->right);
}

return (left_height > right_height ? left_height : right_height);
}
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree.
* The balance factor of a node is the difference in height between its
* left and right subtrees.
*
* @tree: Pointer to the root node of the tree to measure
* Return: Balance factor of the tree, 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height = 0, right_height = 0;
if (tree == NULL)
{
return (0);
}
else
{
left_height = (int)binary_tree_height_b(tree->left);
right_height = (int)binary_tree_height_b(tree->right);
return (left_height - right_height);
}
}
