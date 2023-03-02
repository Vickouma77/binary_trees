#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 *
 * parent: pointer to the node to insert the left child
 *
 * value: value to store new node
 *
 * Return: if success return pointer else return NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
