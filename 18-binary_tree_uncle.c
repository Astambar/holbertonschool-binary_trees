#include "binary_trees.h"

/**
 * binary_tree_uncle - trouve l'oncle d'un nœud
 * @node: un pointeur vers le nœud pour trouver l'oncle
 *
 * Return: pointeur vers le nœud oncle
 * NULL si le nœud est NULL
 * NULL si le parent est NULL
 * NULL si le nœud n'a pas d'oncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
* binary_tree_sibling - trouve le frère d'un nœud
* @node: pointeur vers le nœud pour trouver le frère
*
* Return: pointeur vers le nœud frère
*	NULL si le nœud est NULL
*	NULL si le parent est NULL
*	NULL si le nœud n'a pas de frère
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(*node).parent)
		return (NULL);

	return ((node == (*(*node).parent).left) ? ((*(*node).parent).right) : 
	((*(*node).parent).left));
}
