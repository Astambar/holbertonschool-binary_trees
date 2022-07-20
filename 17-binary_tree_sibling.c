#include "binary_trees.h"

/**
 * binary_tree_sibling - trouve le frère d'un nœud
 * @node: pointeur vers le nœud pour trouver le frère
 *
 * Return: pointeur vers le nœud frère
 * NULL si le nœud est NULL
 * NULL si le parent est NULL
 * NULL si le nœud n'a pas de frère
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(*node).parent)
		return (NULL);

	if (node == (*(*node).parent).left)
		return ((*(*node).parent).right);
	return ((*(*node).parent).left);
}
