#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a specified node from the root.
* @tree: Pointer to the node to check the depth
* Return: Depth of the node, 0 if it is the root or tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
