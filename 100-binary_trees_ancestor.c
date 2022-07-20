#include "binary_trees.h"
#include <string.h>
/**
* binary_trees_ancestor - function that finds the lowest
* common ancestor of two nodes
* @first: is a pointer to the first node
* @second: is a pointer to the second node
* ===========================================
* Your function must return a pointer to the lowest
* common ancestor node of the two given nodes
* If no common ancestor was found, your function must return NULL
* Return: pointer to the ancestor node
*         NULL if there is no ancestor node
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t depth_first, depth_second;

	if (!first || !second)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);
	for (; depth_first > depth_second; first = (*first).parent,
	depth_first--)
	;

	for (; depth_second > depth_first; second = (*second).parent,
	depth_second--)
	;
	for (; first && second; first = (*first).parent,
	second = (*second).parent)
		if (first == second)
			return ((binary_tree_t *)first);
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - mesure la profondeur d'un nœud dans un arbre binaire
 * @tree: noeud pour calculer la profondeur de
 *
 * Return: profondeur du nœud
 * 0 si l'arbre est NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	for (; (*tree).parent; depth++, tree = (*tree).parent)
	;

	return (depth);
}
