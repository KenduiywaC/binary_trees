#include "binary_trees.h"

/**
* count_levels - Counts the levels of a binary tree.
* 
* @tree: Pointer to the root node of the tree.
* Return: The number of levels in the tree.
*/
int count_levels(const binary_tree_t *tree)
{
int left_levels = 0, right_levels = 0;

if (tree == NULL)
return (0);

left_levels = 1 + count_levels(tree->left);
right_levels = 1 + count_levels(tree->right);

return (left_levels > right_levels ? left_levels : right_levels);
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect. 
* @tree: Pointer to the root node of the tree to check.
* Return: 1 if the tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left_levels = 0, right_levels = 0;

if (tree == NULL)
return (0);

left_levels = count_levels(tree->left);
right_levels = count_levels(tree->right);

if (left_levels == right_levels)
return (1);

return (0);
}
