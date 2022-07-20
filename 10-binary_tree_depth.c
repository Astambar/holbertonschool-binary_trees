#include "binary_trees.h"

/**
 * binary_tree_depth - mesure la profondeur d'un nœud dans un arbre binaire
 * @tree : noeud pour calculer la profondeur de
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
