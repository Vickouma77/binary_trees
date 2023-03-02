#include "binary_trees"

/**
 * binary_tree_insert_right -  inserts  node as right child of another node
 *
 * @parent: pointer to the node to insert the right child in
 * @value: is the value to store the new node
 *
 * Return: if failure return NULL else return pointer to created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
