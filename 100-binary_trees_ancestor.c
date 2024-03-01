#include "binary_trees.h"

/**
* binary_trees_ancestor - Finds the lowest common ancestor of two nodes
* @first: First node
* @second: Second node
* Return: Pointer to the lowest common ancestor node, NULL if none found
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second)
{
binary_tree_t *m, *n;

if (first == NULL || second == NULL)
return (NULL);

if (first == second)
return ((binary_tree_t *)first);

m = first->parent;
n = second->parent;

if (m == NULL || first == n || (!m->parent && n))
return (binary_trees_ancestor(first, n));

if (n == NULL || m == second || (!n->parent && m))
return (binary_trees_ancestor(m, second));

return (binary_trees_ancestor(m, n));
}
