#include "binary_trees.h"

/**
* struct node_s - singly linked list
* @node: const binary tree node
* @next: points to the next node
*/
typedef struct node_s
{
const binary_tree_t *node;
struct node_s *next;
} ll;

ll *append(ll *head, const binary_tree_t *btnode);
void free_list(ll *head);
ll *get_children(const binary_tree_t *parent);
void levels_rec(ll *head, void (*func)(int));

/**
* binary_tree_levelorder - Goes through a binary tree
*                          using level-order traversal.
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to a function to call for each node.
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
ll *children = NULL;

if (tree == NULL || func == NULL)
return;

func(tree->n);
children = get_children(tree);
levels_rec(children, func);

free_list(children);
}

/**
* levels_rec - Calls func on all nodes at each level.
* @head: Pointer to head of linked list with nodes at one level.
* @func: Pointer to a function to call for each node.
*/
void levels_rec(ll *head, void (*func)(int))
{
ll *children = NULL, *curr = NULL;

if (head == NULL)
return;

for (curr = head; curr != NULL; curr = curr->next)
{
func(curr->node->n);
children = get_children(curr->node);
}

levels_rec(children, func);
free_list(children);
}

/**
* get_children - Appends children of parent to linked list.
* @parent: Pointer to node whose children we want to append.
* Return: Pointer to head of linked list of children.
*/
ll *get_children(const binary_tree_t *parent)
{
ll *head = NULL;

if (parent == NULL)
return NULL;

if (parent->left)
head = append(head, parent->left);
if (parent->right)
head = append(head, parent->right);

return head;
}

/**
* append - Adds a new node at the end of a linked list
* @head: Pointer to head of linked list
* @btnode: Const binary tree node to append
* Return: Pointer to head, or NULL on failure
*/
ll *append(ll *head, const binary_tree_t *btnode)
{
ll *new = malloc(sizeof(*new)), *last;

if (new == NULL)
return NULL;

new->node = btnode;
new->next = NULL;

if (head == NULL)
return new;

last = head;
while (last->next)
last = last->next;

last->next = new;
return head;
}

/**
* free_list - Frees all the nodes in a linked list
* @head: Pointer to the head of the linked list
*/
void free_list(ll *head)
{
ll *ptr;

while (head != NULL)
}
ptr = head->next;
free(head);
head = ptr;
}
}
